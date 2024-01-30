@class NSString, SSDownloadHandler, NSMapTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSDownloadHandler *_downloadHandler;
    NSMapTable *_downloadToActiveSessions;
    NSMapTable *_downloadToDownloadTokenPendingCompletionHandlers;
    NSMapTable *_downloadToProcessingDownloadHandlerSessions;
    NSMapTable *_downloadToObservationTransactionCount;
    NSMapTable *_downloadToValidStatePendingCompletionHandlers;
    NSMutableArray *_pausedDownloads;
    NSMutableArray *_prioritizedDownloads;
}

@property (readonly, nonatomic) long long downloadHandlerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadHandler:(id)a0 handleSession:(id)a1;
- (void)downloadHandler:(id)a0 cancelSession:(id)a1;
- (void)dealloc;
- (void)downloadManager:(id)a0 downloadPurchaseDidFinish:(id)a1;
- (void)acquirePlayWhileDownloadSessionForDownload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)beginPrioritizingDownloadSession:(id)a0;
- (void)endPrioritizingDownloadSession:(id)a0;
- (void)releasePlayWhileDownloadSession:(id)a0;
- (void)_beginPrioritizingDownload:(id)a0;
- (void)_beginDownloadObservationForDownload:(id)a0;
- (void)_beginPrioritizingDownloadSession:(id)a0;
- (void)_endPrioritizingDownload:(id)a0;
- (void)_endDownloadObservationForDownload:(id)a0;
- (void)_endPrioritizingDownloadSession:(id)a0;
- (void)_handleDownloadPrioritization;
- (void)_getDownloadPropertiesForStoreDownload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateActiveSessionsForDownload:(id)a0;
- (void)_getDownloadTokenForStoreDownload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_isStoreDownloadValidForPlayWhileDownload:(id)a0;
- (void)_postActiveSessionsDidFinishForStoreDownload:(id)a0;
- (void)_updateForDownloadStateRefreshWithDownload:(id)a0;
- (void)_suspendUntilValidDownloadStateForStoreDownload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateForDownloadTokenRefreshWithDownload:(id)a0;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;

@end
