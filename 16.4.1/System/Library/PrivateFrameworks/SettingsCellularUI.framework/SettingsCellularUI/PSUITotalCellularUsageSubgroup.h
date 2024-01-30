@class PSDataUsageStatisticsCache, PSSpecifier;
@protocol PSBillingPeriodSource;

@interface PSUITotalCellularUsageSubgroup : NSObject

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) PSSpecifier *totalUsageSpecifier;
@property (retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithStatisticsCache:(id)a0 andBillingPeriodSource:(id)a1;
- (id)totalBytesUsed;
- (id)totalDataUsageForSpecifier:(id)a0;
- (id)totalRoamingBytesUsed;
- (id)totalRoamingDataUsageForSpecifier:(id)a0;

@end
