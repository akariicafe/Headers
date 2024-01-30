@class NSString, HKSleepDaySummary, HKSleepDay, NSNumber, HKValueRange;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>

@property (readonly, nonatomic) long long seriesType;
@property (readonly, nonatomic) HKSleepDay *sleepDay;
@property (readonly, nonatomic) HKSleepDaySummary *sleepDaySummary;
@property (nonatomic) unsigned long long currentValueViewOptions;
@property (nonatomic) long long currentValueViewOptionsPriority;
@property (retain, nonatomic) NSNumber *currentValueViewOverridePrefixColorsActive;
@property (nonatomic) unsigned long long annotationOptions;
@property (retain, nonatomic) NSNumber *annotationOverrideDuration;
@property (retain, nonatomic) HKValueRange *annotationOverrideDateRange;
@property (retain, nonatomic) NSNumber *annotationOverridePrefixColorsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
