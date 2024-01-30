@class Logger, CTUIListWithHeaderLoadingGroup, PSUICellularUsageLayoutGroup, PSListController;

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate> {
    Logger *_logger;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup;
@property (retain, nonatomic) PSUICellularUsageLayoutGroup *dataUsageSyncGroup;
@property BOOL refreshInProgress;

- (id)specifiers;
- (void)prefetchResourcesFor:(id)a0;
- (id)getLogger;
- (void).cxx_destruct;
- (void)didFailToSetPolicy:(id)a0 forSpecifier:(id)a1;
- (void)presentAlert:(id)a0;
- (void)calculateUsage;
- (void)setGroupSpecifierTitle:(id)a0;
- (void)didResetStatistics;
- (id)initWithListController:(id)a0 groupSpecifierTitle:(id)a1;
- (void)sortGroup;
- (void)selectedBillingPeriodChanged:(unsigned long long)a0;

@end
