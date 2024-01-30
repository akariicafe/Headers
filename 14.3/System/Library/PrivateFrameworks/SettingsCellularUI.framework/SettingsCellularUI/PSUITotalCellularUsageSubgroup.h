@class PSDataUsageStatisticsCache, PSSpecifier;
@protocol PSBillingPeriodSource;

@interface PSUITotalCellularUsageSubgroup : NSObject

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) PSSpecifier *totalUsageSpecifier;
@property (retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;

- (void).cxx_destruct;
- (id)specifiers;
- (id)initWithStatisticsCache:(id)a0 andBillingPeriodSource:(id)a1;
- (id)totalDataUsageForSpecifier:(id)a0;
- (id)totalRoamingDataUsageForSpecifier:(id)a0;
- (id)totalBytesUsed;
- (id)totalRoamingBytesUsed;

@end
