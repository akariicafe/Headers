@class NSString, NSArray, HKUnit, NSDate, HKActivityStatisticsChartPointSummary, NSNumber;

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint> {
    NSDate *_date;
    HKUnit *_unit;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    NSNumber *_moveGoalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;
- (id)initWithNodes:(id)a0 summary:(id)a1 activityCache:(id)a2 energyUnit:(id)a3;
- (double)_nodesCaloriesPercentDifference;

@end
