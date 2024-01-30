@class AXAccessQueue, NSMutableDictionary, AXUIMessageSender, AXUIDisplayManager, NSString, NSMutableArray, BSProcessDeathWatcher;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate> {
    BSProcessDeathWatcher *_springBoardReaper;
}

@property (retain, nonatomic) NSMutableArray *pausedConnections;
@property (retain, nonatomic) AXAccessQueue *resumingConnectionsQueue;
@property (retain, nonatomic) NSMutableDictionary *entitlementsCheckers;
@property (retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue;
@property (retain, nonatomic) AXUIMessageSender *messageSender;
@property (retain, nonatomic) NSMutableArray *serviceContexts;
@property (retain, nonatomic) AXAccessQueue *servicesAccessQueue;
@property (nonatomic) unsigned long long lastUsedServiceIdentifier;
@property (nonatomic) BOOL shouldAllowServicesToProcessMessages;
@property (retain, nonatomic) AXUIDisplayManager *displayManager;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_releaseSharedServiceManager;
+ (id)sharedServiceManager;

- (BOOL)_start;
- (id)_serviceContextForClientWithIdentifier:(id)a0;
- (void)messageSender:(id)a0 accessXPCConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (id)init;
- (void)_sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 toClientWithMessenger:(id)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_servicesForUniqueIdentifiers:(id)a0;
- (void)_registerForSystemAppDeath;
- (void)endTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (id)_uniqueIdentifierForService:(id)a0;
- (void)_unregisterAllClientsWithConnection:(id)a0;
- (void)_handleConnection:(id)a0;
- (void)messageSender:(id)a0 willSendXPCMessage:(id)a1 context:(void *)a2;
- (void)beginTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (BOOL)_serviceWithClass:(Class)a0 canProcessMessageWithIdentifier:(unsigned long long)a1 fromClientWithConnection:(id)a2 possibleRequiredEntitlements:(id *)a3;
- (id)_sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 toClientWithMessenger:(id)a2 error:(id *)a3;
- (BOOL)_registerClientWithIdentifier:(id)a0 connection:(id)a1 serviceBundleName:(id)a2 initiatingMessageIdentifier:(unsigned long long)a3 error:(id *)a4;
- (void)_applicationDidFinishLaunching;
- (id)_clientMessengerWithIdentifier:(id)a0;
- (id)_serviceContextForService:(id)a0;

@end
