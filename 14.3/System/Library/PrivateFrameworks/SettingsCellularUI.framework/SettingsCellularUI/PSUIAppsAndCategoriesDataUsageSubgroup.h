@class PSDataUsageStatisticsCache;
@protocol PSAppCellularUsageSpecifierDelegate;

@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject

@property (weak, nonatomic) id<PSAppCellularUsageSpecifierDelegate> specifierDelegate;
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;

- (void).cxx_destruct;
- (id)specifiers;
- (id)initWithPolicySpecifierDelegate:(id)a0 statisticsCache:(id)a1;

@end
