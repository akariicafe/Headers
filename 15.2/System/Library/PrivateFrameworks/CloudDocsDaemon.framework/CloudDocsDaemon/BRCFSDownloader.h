@class brc_task_tracker, NSString, NSMutableDictionary, NSDate, BRCFairScheduler, BRCDeadlineScheduler;

@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule> {
    brc_task_tracker *_tracker;
    BRCFairScheduler *_fairScheduler;
    unsigned long long _activeDownloadsSize;
    NSDate *_lastDownloadRefresh;
    double _activeDownloadSizeRefreshInterval;
    NSMutableDictionary *_willRetryOperationProgress;
}

@property (readonly, nonatomic) BRCDeadlineScheduler *downloadsDeadlineScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (id)_sanitizeRecord:(id)a0;
- (void)_willDownload:(id)a0 operationID:(id)a1;
- (void)addAliasItem:(id)a0 toDownloadingItem:(id)a1;
- (void)_createDownloadingJobForItem:(id)a0 state:(int)a1 kind:(int)a2 etag:(id)a3 userInitiated:(BOOL)a4;
- (void)evictLosersOnItem:(id)a0 atURL:(id)a1 applySchedulerState:(int *)a2;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2;
- (BOOL)hasThumbnailToApplyForItem:(id)a0;
- (void)close;
- (void)_sendLosersBatch:(id)a0 sizeHint:(long long)a1 maxRecordsCount:(unsigned long long)a2;
- (void)rescheduleJobsPendingWinnerForItem:(id)a0;
- (void)_cancelJobs:(id)a0 state:(int)a1;
- (BOOL)applyThumbnailToItem:(id)a0 serverItem:(id)a1 atURL:(id)a2 applySchedulerState:(int *)a3;
- (unsigned int)recoverAndReportMissingJobs;
- (void)_reportDownloadErrorForDocument:(id)a0 error:(id)a1;
- (void)_close;
- (BOOL)makeContentLive:(id)a0;
- (void)transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3 completionBlock:(id /* block */)a4;
- (id)initWithAccountSession:(id)a0;
- (BOOL)shouldScheduleLosersEvictionForItem:(id)a0;
- (void)_transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3;
- (void)scheduleContentDownloadForItem:(id)a0 serverItem:(id)a1 userInitiated:(BOOL)a2;
- (unsigned long long)inFlightSize;
- (void)schedule;
- (unsigned long long)_bumpThrottleForDownload:(id)a0 throttle:(id)a1;
- (BOOL)applyLosersToItem:(id)a0 serverItem:(id)a1 atURL:(id)a2 applySchedulerState:(int *)a3 addedLosers:(id)a4 removedLosers:(id)a5;
- (void)_postponeLoserForWinner:(long long)a0 etag:(id)a1;
- (void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(unsigned long long)a0;
- (void)cancelAndCleanupItemDownloads:(id)a0;
- (unsigned long long)sizeOfActiveDownloads;
- (void)updateContentDownloadForMetaOnlyChange:(id)a0 fromEtag:(id)a1 toEtag:(id)a2;
- (void).cxx_destruct;
- (BOOL)hasAdditionsToApplyForItem:(id)a0 serverItem:(id)a1;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1;
- (void)_finishDownloadCleanup:(id)a0;
- (BOOL)isDownloadingItem:(id)a0;
- (void)scheduleLosersDownloadForItem:(id)a0 serverItem:(id)a1 purgeStaleEntries:(BOOL)a2 applySchedulerState:(int *)a3;
- (void)scheduleThumbnailDownloadForItem:(id)a0 serverItem:(id)a1 applySchedulerState:(int *)a2;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (void)suspend;
- (void)_sendThumbnailsBatch:(id)a0 sizeHint:(long long)a1 maxRecordsCount:(unsigned long long)a2;
- (void)resume;
- (BOOL)_hasLosersToDelete:(id)a0 serverItem:(id)a1;
- (id)_appLibraryForDownload:(id)a0 kind:(int)a1 operationID:(id)a2;
- (void)_finishedDownload:(id)a0 syncContext:(id)a1 operationID:(id)a2 error:(id)a3;
- (void)_sendContentsBatch:(id)a0 sizeHint:(long long)a1 maxRecordsCount:(unsigned long long)a2;
- (void)deleteJobsMatching:(id)a0;
- (void)cancel;
- (void)deleteDownloadingJobForItem:(id)a0;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)a0;
- (void)_clearDownloadErrorForDocument:(id)a0;

@end
