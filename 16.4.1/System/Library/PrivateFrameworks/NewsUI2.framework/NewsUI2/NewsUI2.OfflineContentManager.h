@class NSSet;

@interface NewsUI2.OfflineContentManager : NSObject <FCOfflineArticleManagerType, NDDownloadConsumer, FCBoostableOperationThrottlerDelegate> {
    void /* unknown type, empty encoding */ downloadedContentIDs;
    void /* unknown type, empty encoding */ contentContext;
    void /* unknown type, empty encoding */ _contributors;
    void /* unknown type, empty encoding */ contributorsReadyGroup;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ _xpcDownloadService;
    void /* unknown type, empty encoding */ _xpcConnectionRetryBudget;
    void /* unknown type, empty encoding */ _registeredWithXPCDownloadService;
    void /* unknown type, empty encoding */ localArticleCacheLookupService;
    void /* unknown type, empty encoding */ localIssueCacheLookupService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localCacheLookupThrottler;
    void /* unknown type, empty encoding */ _interestTokensByContentID;
    void /* unknown type, empty encoding */ downloadMonitors;
    void /* unknown type, empty encoding */ _inFlightContentIDs;
    void /* unknown type, empty encoding */ _offlineContentRequests;
}

@property (nonatomic, readonly) NSSet *downloadedArticleIDs;

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)downloadFinishedForRequest:(id)a0 error:(id)a1;
- (void)downloadProgressedForRequest:(id)a0 contentArchive:(id)a1;
- (void)downloadProgressedForRequest:(id)a0 progress:(double)a1;
- (id)init;
- (void).cxx_destruct;

@end
