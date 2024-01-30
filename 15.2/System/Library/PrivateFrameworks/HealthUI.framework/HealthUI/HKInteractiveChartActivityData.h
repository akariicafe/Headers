@class NSString, HKActivitySummary;

@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData>

@property (retain, nonatomic) HKActivitySummary *activitySummaryData;
@property (nonatomic) long long activityValue;
@property (readonly, nonatomic) BOOL hasActivityGoal;
@property (readonly, nonatomic) BOOL activityValueGoalMet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
