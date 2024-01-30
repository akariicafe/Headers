@class NSData, NSObject;
@protocol OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportFetchTransportScopeTask;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportGetScopeInfoTask> _getLibraryInfo;
    id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
    NSData *_fetchedTransportScope;
    BOOL _retryingFetchingTransportScope;
}

- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)_fetchTransportScope;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)a0;
- (void)_markScopeHasBadTransportScopeWithError:(id)a0;
- (id)taskIdentifier;
- (void)_getLibraryInfo;
- (void).cxx_destruct;
- (void)launch;
- (void)cancel;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)a0;

@end
