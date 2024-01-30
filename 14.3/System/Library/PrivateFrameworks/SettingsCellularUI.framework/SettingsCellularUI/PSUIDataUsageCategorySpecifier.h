@class NSArray, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSUIDataUsageCategorySpecifier : PSSpecifier

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;
@property (retain, nonatomic) NSArray *subcategorySpecifiers;

- (void).cxx_destruct;
- (unsigned long long)dataUsage;
- (id)initWithType:(unsigned long long)a0 subSpecifiers:(id)a1;
- (id)dataUsageString;

@end
