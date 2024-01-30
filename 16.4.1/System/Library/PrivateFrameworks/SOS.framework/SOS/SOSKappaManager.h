@class NSString, NSXPCConnection, SOSStatus, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SOSKappaManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol>

@property (class, readonly, nonatomic) BOOL isKappaEnabled;
@property (class, readonly, nonatomic) SOSStatus *currentSOSStatus;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)mapSOSFlowStateToKappaState:(long long)a0;
+ (unsigned long long)mapServerResponseToKappaResponse:(long long)a0;

- (void)addObserver:(id)a0;
- (void)updateClientCurrentSOSInteractiveState:(long long)a0;
- (void)updateClientCurrentSOSButtonPressState:(id)a0;
- (void)didDismissClientSOSBeforeSOSCall:(long long)a0;
- (void)setSendingLocationUpdate:(BOOL)a0;
- (void)didUpdateSOSStatus:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)dismissClientSOSWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSInitiationState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)updateObserversWithKappaStatus:(id)a0;
- (void)detectedAnomalyWithElectedDevice:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)forceStartConnection;
- (void)triggerKappaWithCompletion:(id /* block */)a0;

@end
