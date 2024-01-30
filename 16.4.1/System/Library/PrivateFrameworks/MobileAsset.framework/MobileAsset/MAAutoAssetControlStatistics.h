@class MAAutoAssetControlStatisticsByCommand, MAAutoAssetControlStatisticsBySize;

@interface MAAutoAssetControlStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRequests;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesSuccess;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesFailure;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalQueuedClientRequests;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalDequeuedClientRequests;
@property (nonatomic) long long totalAutoAssetJobsStarted;
@property (nonatomic) long long totalAutoJobsFinished;
@property (nonatomic) long long totalStagerDetermineJobsStarted;
@property (nonatomic) long long totalStagerDetermineJobsFinished;
@property (nonatomic) long long totalStagerDownloadJobsStarted;
@property (nonatomic) long long totalStagerDownloadJobsFinished;
@property (nonatomic) long long totalResumedInFlightJobs;
@property (nonatomic) long long totalSchedulerTriggeredJobs;
@property (nonatomic) long long totalFailuresToStartJobs;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *previouslyDownloaded;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalDownloaded;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalStaged;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalUnstaged;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalPromoted;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalRemoved;
@property (nonatomic) long long finishedJobSchedulerNetworkFailure;
@property (nonatomic) long long finishedJobSchedulerNotNetworkRelated;
@property (nonatomic) long long finishedJobClientNetworkFailure;
@property (nonatomic) long long finishedJobClientNotNetworkRelated;
@property (nonatomic) BOOL garbageCollectionPerformed;
@property (nonatomic) BOOL garbageCollectionReclaimSpace;
@property (nonatomic) long long garbageCollectionTotalReclaimedSpace;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetCount;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetSpace;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveSpace;
@property (nonatomic) long long garbageCollectionReclaimedStagedCount;
@property (nonatomic) long long garbageCollectionReclaimedStagedSpace;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedSpace;

+ (id)allocStringForBytes:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)copy;
- (id)initWithInitialValue:(long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
