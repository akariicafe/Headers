@class IMRemoteObject, NSString, NSObject, IMAVDaemonListener, IMLocalObject, NSMutableArray, NSLock;
@protocol OS_dispatch_queue, IMAVDaemonProtocol;

@interface IMAVDaemonController : NSObject {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

@property (readonly, nonatomic) IMAVDaemonListener *listener;

+ (id)sharedInstance;

- (void)_connectToDaemon;
- (BOOL)removeListenerID:(id)a0;
- (void)_noteSetupComplete;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (void)_disconnectFromDaemon;
- (BOOL)hasListenerForID:(id)a0;
- (void)remoteObjectDiedNotification:(id)a0;
- (void)localObjectDiedNotification:(id)a0;
- (void)_remoteObjectCleanup;
- (void)_listenerSetUpdated;
- (BOOL)addListenerID:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)_localObjectCleanup;
- (BOOL)remoteObjectExists;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)localObjectExists;
- (void)_cleanUpConnection;
- (BOOL)__isLocalObjectValidOnQueue:(id)a0;
- (BOOL)__isRemoteObjectValidOnQueue:(id)a0;
- (void)_localObjectDiedNotification:(id)a0;
- (BOOL)_makeConnectionWithCompletionBlock:(id /* block */)a0;
- (void)_remoteObjectDiedNotification:(id)a0;

@end
