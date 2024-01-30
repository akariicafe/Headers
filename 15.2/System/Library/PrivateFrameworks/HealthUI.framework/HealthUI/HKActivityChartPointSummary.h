@class NSString;

@interface HKActivityChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo>

@property (readonly, nonatomic) NSString *formattedDateString;
@property (readonly, nonatomic) NSString *workoutSummaryString;
@property (readonly, nonatomic) NSString *energyBurnSummaryString;
@property (readonly, nonatomic) NSString *activityGoalSummaryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;
+ (id)_distanceFormatter;

@end
