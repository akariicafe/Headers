@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject

@property (nonatomic) BOOL isSyncing;
@property (nonatomic) unsigned long long recordsRead;
@property (nonatomic) unsigned long long recordsWritten;
@property (nonatomic) unsigned long long recordsWriteFailed;
@property (readonly, nonatomic) IMDCKSyncState *syncState;
@property (weak) id<IMDCKAbstractSyncControllerDelegate> delegate;

- (id)syncStateDebuggingInfo:(id)a0;
- (long long)syncControllerRecordType;
- (id)errorAnalyzer;
- (void).cxx_destruct;
- (id)ckUtilities;
- (id)describeRecordCounts;
- (void)resetRecordCounts;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)setBroadcastedSyncStateToUploading;
- (void)setBroadcastedSyncStateToDownloading;
- (void)syncBatchCompleted:(unsigned long long)a0;
- (void)countRecordOnRead:(BOOL)a0 didSucceed:(BOOL)a1;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToStartingInitialSync;

@end
