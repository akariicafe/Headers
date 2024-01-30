@class CTUIListWithHeaderLoadingGroup, PSUICellularUsageLayoutGroup, PSListController;

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate>

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup;
@property (retain, nonatomic) PSUICellularUsageLayoutGroup *dataUsageSyncGroup;

- (void).cxx_destruct;
- (void)prefetchResourcesFor:(id)a0;
- (id)specifiers;
- (void)didFailToSetPolicy:(id)a0 forSpecifier:(id)a1;
- (void)presentAlert:(id)a0;
- (void)calculateUsage;
- (void)setGroupSpecifierTitle:(id)a0;
- (void)didResetStatistics;
- (id)initWithListController:(id)a0 groupSpecifierTitle:(id)a1;
- (void)sortGroup;
- (void)selectedBillingPeriodChanged:(unsigned long long)a0;

@end
