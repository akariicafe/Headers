@class PLOperator, NSMutableSet;

@interface PLAWDAuxMetrics : NSObject

@property (weak) PLOperator *operator;
@property (retain, nonatomic) NSMutableSet *runningMetrics;

+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)a0;

- (void).cxx_destruct;
- (BOOL)doesInterfereWithChargerWithStartDate:(id)a0 withEndDate:(id)a1;
- (BOOL)dropFirstEntryReceived:(id)a0 usingFilter:(id)a1 andStartTime:(id)a2;
- (double)getRailEnergyWithEntry:(id)a0 withFilter:(id)a1 isRailForward:(BOOL)a2;
- (void)handleChargerChangeWithState:(BOOL)a0 withDate:(id)a1;
- (id)initWithOperator:(id)a0;
- (void)resetTableWithEntryKey:(id)a0;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;

@end
