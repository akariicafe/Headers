@class HDHeadphoneExposureStatisticsResult;

@interface HDHeadphoneExposureUpdateDoseResult : NSObject

@property (retain, nonatomic) HDHeadphoneExposureStatisticsResult *statistics;

+ (id)resultForNoChange;
+ (id)resultForUpdate:(id)a0;

- (void).cxx_destruct;
- (id)_initWithStatistics:(id)a0;

@end
