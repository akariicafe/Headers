@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject

@property (nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isUsingStingRay;
@property (readonly, nonatomic) IMDCKSyncState *syncState;
@property (weak) id<IMDCKAbstractSyncControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)ckUtilities;
- (long long)syncControllerRecordType;
- (id)syncStateDebuggingInfo:(id)a0;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)setBroadcastedSyncStateToUploading;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)setBroadcastedSyncStateToDownloading;
- (void)syncBatchCompleted:(unsigned long long)a0;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToStartingInitialSync;

@end
