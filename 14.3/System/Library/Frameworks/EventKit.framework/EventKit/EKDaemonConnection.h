@class CADDatabaseInitializationOptions, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, EKDaemonConnectionDelegate, CADInterface;

@interface EKDaemonConnection : NSObject <CADClientInterface> {
    NSObject<OS_dispatch_queue> *_connectionLock;
    id<CADInterface> _remoteOperationProxy;
    id<CADInterface> _syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    BOOL _registeredForStartNote;
    BOOL _wasAbortedDueToExcessiveConnctions;
}

@property (class, readonly, nonatomic) unsigned long long maxNumberOfOpenConnections;

@property (nonatomic) BOOL hasEverConnected;
@property (readonly, retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxy;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxySync;
@property (weak) id<EKDaemonConnectionDelegate> delegate;
@property (retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions;

+ (void)_unregisterConnection;
+ (BOOL)_tryRegisterNewConnection;

- (void)disconnect;
- (id)init;
- (unsigned int)addCancellableRemoteOperation:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)a0 forSearchToken:(unsigned int)a1 finished:(BOOL)a2;
- (void)_finishAllRepliesOnServerDeath;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)_daemonRestarted;
- (void)cancelRemoteOperation:(unsigned int)a0;
- (void)removeCancellableRemoteOperation:(unsigned int)a0;
- (BOOL)_connectToServer;

@end
