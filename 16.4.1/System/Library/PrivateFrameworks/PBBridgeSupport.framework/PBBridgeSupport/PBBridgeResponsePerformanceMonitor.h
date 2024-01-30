@class NSMutableDictionary, NSMutableString, NSArray, NSDictionary, NSMutableArray;

@interface PBBridgeResponsePerformanceMonitor : NSObject

@property (retain, nonatomic) NSMutableString *logBuffer;
@property (readonly, nonatomic) NSMutableArray *measurements;
@property (readonly, nonatomic) NSMutableDictionary *milestones;
@property (readonly, nonatomic) NSMutableDictionary *macroActivities;
@property (retain, nonatomic) NSArray *remoteMeasurements;
@property (retain, nonatomic) NSDictionary *remoteMilestones;
@property (retain, nonatomic) NSDictionary *remoteMacroActivities;

+ (id)shareMonitor;

- (void).cxx_destruct;
- (void)_logLocalMeasurements:(BOOL)a0;
- (void)_logMacroActivitiesLocal:(BOOL)a0;
- (void)_logMeasurements;
- (void)_logMilestones;
- (void)addMeasurement:(double)a0 timeSent:(double)a1 activityType:(id)a2 activityIdentifier:(id)a3;
- (void)addMilestone:(double)a0 activityType:(id)a1 activityIdentifier:(id)a2;
- (void)beginMacroActivity:(id)a0 beginTime:(double)a1;
- (void)beginMonitorTransaction;
- (double)endMacroActivity:(id)a0 beginTime:(double)a1;
- (void)endMonitorTransaction;

@end
