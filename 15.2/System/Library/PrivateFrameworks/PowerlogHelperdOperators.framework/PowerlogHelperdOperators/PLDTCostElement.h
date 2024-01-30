@class NSDate;

@interface PLDTCostElement : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *costReturnedTillDate;
@property double costAggregated;
@property (retain) NSDate *lastOverheadStart;

+ (id)getCostElementInstance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTime:(id)a0;
- (void)addNetworkingEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3 withQueryCount:(int)a4;
- (id)getNetworkingCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4 withQueryCount:(int)a5;
- (void)addLocationEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (id)getLocationCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (void)addCpuEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (id)getCpuCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (void)addGpuEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (id)getGpuCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (void)addDisplayEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (id)getDisplayCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (void)addEvent:(double)a0 atTime:(id)a1;
- (id)getCostUptoTime:(id)a0;
- (id)getApplicationCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;

@end
