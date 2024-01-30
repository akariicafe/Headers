@class NSString;

@interface ATXSmartPauseDatabaseQueryResult : NSObject

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *threadId;
@property (nonatomic) unsigned long long countLastFiveMinutesNotifications;
@property (nonatomic) unsigned long long countLastFiveMinutesPositiveEngagements;
@property (nonatomic) unsigned long long countLastHourNotifications;
@property (nonatomic) unsigned long long countLastHourPositiveEngagements;
@property (nonatomic) unsigned long long countLastDayNotifications;
@property (nonatomic) unsigned long long countLastDayPositiveEngagements;
@property (nonatomic) unsigned long long countLastWeekNotifications;
@property (nonatomic) unsigned long long countLastWeekPositiveEngagements;
@property (nonatomic) unsigned long long countNotifications;
@property (nonatomic) unsigned long long countPositiveEngagements;

+ (id)groupByBundleId:(id)a0;

- (void).cxx_destruct;
- (void)mergeWithOther:(id)a0;
- (id)initWithBundleId:(id)a0 threadId:(id)a1;

@end
