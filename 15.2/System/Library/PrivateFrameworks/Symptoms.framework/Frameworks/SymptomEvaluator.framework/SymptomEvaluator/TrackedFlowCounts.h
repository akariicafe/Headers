@interface TrackedFlowCounts : NSObject

@property (nonatomic) unsigned long long rxCellularBytes;
@property (nonatomic) unsigned long long txCellularBytes;
@property (nonatomic) unsigned long long rxWiFiBytes;
@property (nonatomic) unsigned long long txWiFiBytes;
@property (nonatomic) unsigned long long rxWiredBytes;
@property (nonatomic) unsigned long long txWiredBytes;
@property (nonatomic) unsigned long long rxPkts;
@property (nonatomic) unsigned long long txPkts;
@property (nonatomic) unsigned long long rxDupeBytes;
@property (nonatomic) unsigned long long rxOOOBytes;
@property (nonatomic) unsigned long long txReTxBytes;
@property (nonatomic) double rttMinimumSecs;
@property (nonatomic) double rttAverageSecs;
@property (nonatomic) double rttVariation;
@property (nonatomic) BOOL probedFlow;
@property (nonatomic) BOOL probed3WHSStuckFlow;
@property (nonatomic) BOOL probedReadStuckFlow;
@property (nonatomic) BOOL probedWriteStuckFlow;

- (id)description;
- (void)addFlowCounts:(id)a0;
- (void)subtractFlowCounts:(id)a0;

@end
