@class NSDate;

@interface PLDTCostElement : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *costReturnedTillDate;
@property double costAggregated;
@property (retain) NSDate *lastOverheadStart;

+ (id)getCostElementInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTime:(id)a0;
- (void)addCpuEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (void)addDisplayEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (void)addEvent:(double)a0 atTime:(id)a1;
- (void)addGpuEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (void)addLocationEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3;
- (void)addNetworkingEvent:(double)a0 atTime:(id)a1 withPid:(int)a2 withAppState:(int)a3 withQueryCount:(int)a4;
- (id)getApplicationCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (id)getCostUptoTime:(id)a0;
- (id)getCpuCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (id)getDisplayCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (id)getGpuCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (id)getLocationCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4;
- (id)getNetworkingCostUptoTime:(id)a0 withPid:(int)a1 withLastActiveStart:(id)a2 withLastSuspendStart:(id)a3 withAppState:(int)a4 withQueryCount:(int)a5;

@end
