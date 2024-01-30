@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;

- (unsigned long long)dataUsage;
- (void).cxx_destruct;
- (id)dataUsageString;
- (id)initWithType:(unsigned long long)a0 bundleID:(id)a1 statisticsCache:(id)a2;

@end
