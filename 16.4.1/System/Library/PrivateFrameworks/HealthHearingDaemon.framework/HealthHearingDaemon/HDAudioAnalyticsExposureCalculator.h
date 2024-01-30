@class HDProfile, NSDate;

@interface HDAudioAnalyticsExposureCalculator : NSObject

@property (retain, nonatomic) NSDate *targetDate;
@property (retain, nonatomic) HDProfile *profile;
@property (nonatomic) long long audioExposureType;

- (void).cxx_destruct;
- (id)audioExposureResultWithError:(id *)a0;
- (id)initWithTargetDate:(id)a0 exposureType:(long long)a1 profile:(id)a2;
- (id)notificationCountForRollingDays:(long long)a0 error:(id *)a1;
- (id)sevenDayDoseForMostRecentNotificationWithError:(id *)a0;

@end
