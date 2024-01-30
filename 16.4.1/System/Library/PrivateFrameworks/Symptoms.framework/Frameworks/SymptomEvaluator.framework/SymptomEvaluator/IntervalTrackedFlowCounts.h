@interface IntervalTrackedFlowCounts : TrackedFlowCounts

@property (nonatomic) unsigned long long timestampSeconds;
@property (nonatomic) unsigned long long numBlemishedFlows;
@property (nonatomic) unsigned long long numUnblemishedFlows;

- (id)description;
- (void)addFlowCounts:(id)a0;
- (void)addIntervalFlowCounts:(id)a0;
- (void)subtractFlowCounts:(id)a0;
- (void)subtractIntervalFlowCounts:(id)a0;

@end
