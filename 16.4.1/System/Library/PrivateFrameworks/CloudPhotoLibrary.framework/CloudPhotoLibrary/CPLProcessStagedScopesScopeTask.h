@class CPLScopeChange, CPLEngineScope, CPLTransportScopeMapping, NSObject, NSData;
@protocol CPLEngineTransportGetScopeInfoTask, CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportCleanupStagedScopeTask, CPLEngineTransportGroup, OS_dispatch_queue;

@interface CPLProcessStagedScopesScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineScope *_destinationScope;
    CPLScopeChange *_destinationScopeChange;
    CPLEngineScope *_stagingScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    NSData *_destinationTransportScope;
    NSData *_stagingTransportScope;
    id<CPLEngineTransportGetScopeInfoTask> _checkDestinationTask;
    id<CPLEngineTransportCleanupStagedScopeTask> _cleanupTask;
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportGroup> _transportGroup;
    BOOL _isPrimarySharedLibrary;
}

+ (void)initialize;

- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (void).cxx_destruct;
- (void)_checkDestinationAndProcessCleanup;
- (void)_cleanupStagedScopeInTransaction:(id)a0 store:(id)a1;
- (void)_deleteStagingScopeIfNecessary;
- (void)_excludeScopes;
- (void)_startActualCleanup;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)taskDidFinishWithError:(id)a0;

@end
