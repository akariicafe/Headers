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

- (void)willResignActive:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (void)_checkin:(BOOL)a0;
- (void)_disconnectFromPairedSync;
- (void)_handleDaemonStarted;
- (void)_queue_invalidateSyncSession:(id)a0;
- (void)_queue_loadConnectionIfNeeded;
- (void)_reconnectToPairedSync;
- (oneway void)invalidateSyncSession:(id)a0;
- (id)providerWithErrorHandler:(id /* block */)a0;
- (void)setCurrentSyncSession:(id)a0;
- (void)startObservingSyncSessionsWithCompletion:(id /* block */)a0;
- (oneway void)syncSessionWillStart:(id)a0;
- (oneway void)updateSyncSession:(id)a0;

@end
