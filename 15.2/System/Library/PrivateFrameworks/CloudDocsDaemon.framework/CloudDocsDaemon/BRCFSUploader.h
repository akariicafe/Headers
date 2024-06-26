@class BRCDeadlineScheduler, NSString, BRCDeadlineSource, BRCFairScheduler, NSMutableDictionary, NSMutableSet, NSObject, br_pacer;
@protocol OS_dispatch_queue;

@interface BRCFSUploader : BRCFSTransferScheduler <BRCModule> {
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCFairScheduler *_fairScheduler;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    br_pacer *_globalQuotaStateUpdatePacer;
    BOOL _prepareReachedMax;
}

@property (readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler;
@property (readonly, nonatomic) NSMutableDictionary *thumbnailsOperationsByID;
@property (nonatomic) BOOL isDefaultOwnerOutOfQuota;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (void)_reportUploadErrorForDocument:(id)a0 error:(id)a1;
- (void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)a0;
- (void)_startFetchThumbnail:(id)a0 jobID:(id)a1;
- (void)_updateRecordInDB:(id)a0 item:(id)a1 syncContext:(id)a2 transferSize:(unsigned long long)a3 stageID:(id)a4;
- (void)close;
- (void)_globalQuotaStateUpdateForDefaultOwner;
- (void)setState:(int)a0 forItem:(id)a1;
- (BOOL)canScheduleMoreJobs;
- (void)_cancelJobs:(id)a0 state:(int)a1;
- (void)boostDocID:(id)a0 item:(id)a1;
- (void)_finishedUploadingItem:(id)a0 record:(id)a1 jobID:(id)a2 stageID:(id)a3 syncContext:(id)a4 error:(id)a5;
- (unsigned int)recoverAndReportMissingJobs;
- (id)_documentItemForJobID:(id)a0 stageID:(id)a1;
- (void)removeBoostedDocID:(id)a0;
- (void)transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3 completionBlock:(id /* block */)a4;
- (id)initWithAccountSession:(id)a0;
- (void)_transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3;
- (void)uploadItem:(id)a0;
- (void)schedule;
- (void)_doneFetchingThumbnailForJobID:(id)a0;
- (id)_duplicatePackage:(id)a0 stageID:(id)a1 stageName:(id)a2 error:(id *)a3;
- (void)_updateJobID:(id)a0 setStageID:(id)a1 operationID:(id)a2;
- (void)_handleFileModifiedError:(id)a0 forItem:(id)a1;
- (id)_thumbnailOperationForItemRowID:(id)a0;
- (BOOL)hasItemsOverQuotaInZone:(id)a0;
- (void).cxx_destruct;
- (void)_cancelJobsMatching:(id)a0;
- (unsigned long long)_thumbnailOperationsMax;
- (void)_updateRecord:(id)a0 jobID:(id)a1 syncContext:(id)a2 thumbnailOperation:(id)a3 stageID:(id)a4;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (void)_computeRecordForJobID:(id)a0 item:(id)a1 syncContext:(id)a2;
- (void)suspend;
- (void)finishedSyncingUpItem:(id)a0 withOutOfQuotaError:(id)a1;
- (BOOL)isUploadingItem:(id)a0;
- (void)resume;
- (id)_buildItemTooLargeErrorIfNeeded:(id)a0 syncContext:(id)a1;
- (id)_documentItemForJobID:(id)a0 operationID:(id)a1;
- (void)_performServerSideAssetCopyForItem:(id)a0 transferSize:(unsigned long long)a1;
- (BOOL)_finishPackageUploadWithRecord:(id)a0 item:(id)a1 stageID:(id)a2 error:(id *)a3;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_scheduleRetries;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)a0;
- (void)deleteJobsMatching:(id)a0;
- (BOOL)_updatePackageRecord:(id)a0 item:(id)a1 stageID:(id)a2 error:(id *)a3;
- (void)_updateRecord:(id)a0 item:(id)a1 syncContext:(id)a2 thumbnailOperation:(id)a3 stageID:(id)a4;
- (void)cancel;
- (void)addAliasItem:(id)a0 toUploadingItem:(id)a1;
- (unsigned long long)_minBatchSize;
- (void)cancelAndCleanupItemUpload:(id)a0;
- (void)_willAttemptJobID:(id)a0 throttle:(id)a1 operationID:(id)a2;
- (void)deleteJobsForZone:(id)a0;
- (void)deleteUploadingJobForItem:(id)a0;
- (id)descriptionForJobID:(id)a0 context:(id)a1;
- (void)forceScheduleQuotaFetchForOwner:(id)a0;
- (void)ownerDidReceiveOutOfQuotaError:(id)a0;
- (id)quotaAvailableForOwner:(id)a0;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)a0;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)a0;
- (void)scheduleQuotaStateUpdateForOwner:(id)a0;
- (BOOL)hasItemsOverQuotaForOwner:(id)a0;
- (void)setIsDefaultOwnerOutOfQuota:(BOOL)a0 forceSignalContainers:(BOOL)a1;
- (void)setState:(int)a0 forJobID:(id)a1 zone:(id)a2;
- (void)setState:(int)a0 forUploadJobID:(id)a1 zone:(id)a2;
- (void)_clearUploadErrorForDocument:(id)a0;

@end
