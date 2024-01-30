@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;

- (void).cxx_destruct;
- (unsigned long long)dataUsage;
- (id)initWithType:(unsigned long long)a0 bundleID:(id)a1 statisticsCache:(id)a2;
- (id)dataUsageString;

@end
