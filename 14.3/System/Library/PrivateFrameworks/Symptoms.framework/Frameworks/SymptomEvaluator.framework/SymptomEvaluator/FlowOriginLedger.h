@class NSString, NSMutableDictionary, NSMutableArray;

@interface FlowOriginLedger : NSObject

@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) NSMutableDictionary *currentFlows;
@property (retain, nonatomic) NSMutableDictionary *currentAssetDownloads;
@property (retain, nonatomic) NSMutableArray *possibleAVFlows;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long totalObservedIfTypeRxBytes;
@property (nonatomic) unsigned long long totalObservedIfTypeTxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesIfTypeRxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesIfTypeTxBytes;
@property (nonatomic) unsigned long long closedFlows;
@property (nonatomic) unsigned long long prevPollIfTypeRxBytes;
@property (nonatomic) unsigned long long prevPollIfTypeTxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalIfTypeRxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalIfTypeTxBytes;
@property (nonatomic) unsigned long long prevPrevPollIfTypeRxBytes;
@property (nonatomic) unsigned long long prevPrevPollIfTypeTxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalIfTypeRxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalIfTypeTxBytes;
@property (nonatomic) unsigned long long sampleStartIfTypeRxBytes;
@property (nonatomic) unsigned long long sampleStartIfTypeTxBytes;
@property (readonly, nonatomic) unsigned long long sampleIfTypeRxBytes;
@property (readonly, nonatomic) unsigned long long sampleIfTypeTxBytes;
@property (readonly, nonatomic) double sampleRxThroughput;
@property (readonly, nonatomic) double sampleTxThroughput;
@property (nonatomic) BOOL mostRecentFlowSeenAsForeground;
@property (nonatomic) BOOL sampleStartedInForegroundState;
@property (nonatomic) BOOL sampledAsHighTransferSize;
@property (nonatomic) BOOL sampledAsHighInterfaceUse;
@property (nonatomic) BOOL sampledAsCoreMediaAssetDownload;
@property (nonatomic) BOOL sampledCoreMediaAssetDownloadInactive;
@property (nonatomic) unsigned long long sampleAdditionalFlags;
@property (nonatomic) double sampleStartTime;
@property (nonatomic) double sampleTotalBusyTime;
@property (nonatomic) double lastUsed;

- (id)briefDescription;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)startSamplingPeriod;

@end
