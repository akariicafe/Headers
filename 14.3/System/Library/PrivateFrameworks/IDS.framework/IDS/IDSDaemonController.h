@class NSString, IMRemoteObject, NSProtocolChecker, IDSDaemonControllerForwarder, NSMutableDictionary, NSSet, IDSDaemonListener, NSObject, IMLocalObject, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_group, IDSDaemonProtocol;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    IDSDaemonControllerForwarder *_forwarder;
    IMLocalObject *_localObject;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    unsigned long long _connectionID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _hasBeenSuspended;
    BOOL _fatalErrorOccured;
    NSMutableSet *_notificationServices;
}

@property (setter=_setAutoReconnect:) BOOL _autoReconnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) BOOL isConnecting;
@property (retain, nonatomic) IMRemoteObject<IDSDaemonProtocol> *remoteObject;
@property (readonly, nonatomic) NSString *listenerID;
@property (readonly, nonatomic) IDSDaemonListener *listener;
@property (nonatomic) int curXPCMessagePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (BOOL)_applicationWillTerminate;

- (void)removeListenerID:(id)a0;
- (void)_disconnectFromDaemonWithForce:(BOOL)a0;
- (BOOL)_makeConnectionWithLaunch:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)init;
- (void)disconnectFromDaemon;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)sendXPCObject:(id)a0 objectContext:(id)a1;
- (void)systemApplicationWillEnterForeground;
- (BOOL)localObjectExists;
- (BOOL)hasListenerForID:(id)a0;
- (BOOL)remoteObjectExists;
- (void)dealloc;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 services:(id)a1 commands:(id)a2 capabilities:(unsigned int)a3;
- (id)commandsForListenerID:(id)a0;
- (unsigned int)capabilitiesForListenerID:(id)a0;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (void)_noteSetupComplete;
- (void)remoteObjectDiedNotification:(id)a0;
- (void)_setServices:(id)a0 commands:(id)a1 capabilities:(unsigned int)a2;
- (id)commands;
- (void)systemApplicationDidSuspend;
- (void)localObjectDiedNotification:(id)a0;
- (BOOL)isConnected;
- (BOOL)setCapabilities:(unsigned int)a0 forListenerID:(id)a1 shouldLog:(BOOL)a2;
- (BOOL)_setCapabilities:(unsigned int)a0;
- (void)blockUntilConnected;
- (void)systemApplicationDidResume;
- (void)addedDelegateForService:(id)a0 withCompletion:(id /* block */)a1;
- (void)_listenerSetUpdated;
- (void)_performBlock:(id /* block */)a0;
- (void)_handleDaemonException:(id)a0;
- (BOOL)setServices:(id)a0 forListenerID:(id)a1;
- (id)localObject;
- (void)_performBlock:(id /* block */)a0 wait:(BOOL)a1;
- (unsigned int)capabilities;
- (BOOL)_setServices:(id)a0;
- (void)_localObjectCleanup;
- (id)forwarderWithCompletion:(id /* block */)a0;
- (void)systemApplicationDidEnterBackground;
- (BOOL)addListenerID:(id)a0 services:(id)a1 commands:(id)a2;
- (id)servicesForListenerID:(id)a0;
- (void)_remoteObjectCleanup;
- (BOOL)addListenerID:(id)a0 services:(id)a1;
- (void)_noteDisconnected;
- (BOOL)setCommands:(id)a0 forListenerID:(id)a1;
- (id)services;
- (BOOL)connectToDaemon;
- (BOOL)_setCommands:(id)a0;
- (void)_agentDidLaunchNotification:(id)a0;
- (void)_connectToDaemonWithLaunch:(BOOL)a0 services:(id)a1 commands:(id)a2 capabilities:(unsigned int)a3;

@end
