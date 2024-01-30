@class NSString, CTUIListWithHeaderLoadingGroup, PSUIAppDataUsageSpecifierFactory, PSListController;

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate>

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup;
@property (retain, nonatomic) PSUIAppDataUsageSpecifierFactory *appDataUsageSpecifierFactory;
@property BOOL refreshInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)didFailToSetPolicyForSpecifier:(id)a0;
- (void)calculateUsage;
- (void)didResetStatistics;
- (id)initWithListController:(id)a0 groupSpecifierTitle:(id)a1;
- (void)prefetchPoliciesFor:(id)a0;
- (void)selectedBillingPeriodChanged:(unsigned long long)a0;
- (void)setGroupSpecifierTitle:(id)a0;
- (void)sortGroup;

@end
