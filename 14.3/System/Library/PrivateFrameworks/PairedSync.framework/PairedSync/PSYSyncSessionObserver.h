@class NSObject, NSString, NSXPCConnection, PSYSyncSessionObserverExportedObject, PSYSyncSession;
@protocol OS_dispatch_queue, PSYSyncSessionObserverDelegate;

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface> {
    PSYSyncSession *_currentSyncSession;
    PSYSyncSessionObserverExportedObject *_exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _shouldCheckinAfterInvalidationHandler;
    int _daemonDidLaunchNotifyToken;
    BOOL _resignedActive;
}

@property (weak, nonatomic) id<PSYSyncSessionObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)_connectionInvalidated;
- (void)_handleDaemonStarted;
- (void)_disconnectFromPairedSync;
- (void)_reconnectToPairedSync;
- (void)startObservingSyncSessionsWithCompletion:(id /* block */)a0;
- (oneway void)invalidateSyncSession:(id)a0;
- (oneway void)updateSyncSession:(id)a0;
- (oneway void)syncSessionWillStart:(id)a0;
- (void)setCurrentSyncSession:(id)a0;
- (id)providerWithErrorHandler:(id /* block */)a0;
- (void)_checkin:(BOOL)a0;
- (void)_queue_invalidateSyncSession:(id)a0;
- (void)_queue_loadConnectionIfNeeded;

@end
