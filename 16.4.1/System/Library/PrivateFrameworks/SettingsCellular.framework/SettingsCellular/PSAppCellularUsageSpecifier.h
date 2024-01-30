@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource, PSAppCellularUsageSpecifierDelegate;

@interface PSAppCellularUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL shouldShowUsage;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;
@property (weak, nonatomic) id<PSAppCellularUsageSpecifierDelegate> delegate;

+ (id)systemPolicySpecifierForAppName:(id)a0 bundleID:(id)a1 icon:(id)a2 enabled:(BOOL)a3;
+ (id)appSpecifierWithBundleID:(id)a0 statisticsCache:(id)a1;
+ (id)watchOnlyAppSpecifierWithBundleID:(id)a0 statisticsCache:(id)a1;
+ (id)_specifierWithCellTitle:(id)a0 bundleID:(id)a1 shouldShowUsage:(BOOL)a2 icon:(id)a3 statisticsCache:(id)a4;
+ (void)setIconForSpecifier:(id)a0 bundleID:(id)a1;
+ (id)systemPolicySpecifierForAppName:(id)a0 bundleID:(id)a1 icon:(id)a2;

- (BOOL)isRestricted;
- (unsigned long long)dataUsage;
- (void).cxx_destruct;
- (id)dataUsageString;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
