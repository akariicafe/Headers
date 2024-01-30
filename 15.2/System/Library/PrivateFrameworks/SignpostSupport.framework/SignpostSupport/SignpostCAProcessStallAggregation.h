@class NSString, NSMutableSet, SignpostCAIntervalAggregationStats;

@interface SignpostCAProcessStallAggregation : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isSystemAggregation;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *processExecutablePath;
@property (readonly, nonatomic) NSMutableSet *pids;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longCommitStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longTransactionLifetimeStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longHIDLatencyStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLatencyStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longRenderForTimeStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLifetimeStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longResponsibleFrameLifetimeStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *glitchStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleGlitchStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *firstFrameGlitchStats;
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleFirstFrameGlitchStats;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)_statsForType:(unsigned char)a0 initIfMissing:(BOOL)a1;
- (void)_iterateTypeStatsWithBlock:(id /* block */)a0;
- (unsigned long long)_totalStallDurationNs;
- (id)_initAsSystemAggregation;
- (id)_initWithProcessExecutablePath:(id)a0 pid:(int)a1;
- (void)_addDuration:(unsigned long long)a0 ofType:(unsigned char)a1;
- (void)_addOtherProcessStallAggregation:(id)a0;

@end
