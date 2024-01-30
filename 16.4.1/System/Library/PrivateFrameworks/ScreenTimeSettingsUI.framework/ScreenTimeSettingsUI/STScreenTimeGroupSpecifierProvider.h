@class PSSpecifier;

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly) PSSpecifier *usageSummarySpecifier;
@property (readonly) PSSpecifier *seeAllActivitySpecifier;

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_showUsageDetailListController:(id)a0;
- (void)_displayNameDidChangeFrom:(id)a0 to:(id)a1;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)a0;
- (void)_refreshingDidChange:(BOOL)a0;
- (void)_screenTimeEnabledDidChange:(BOOL)a0;
- (id)_usageDetailsCoordinator:(id)a0;
- (void)_usageReportDidChangeFrom:(id)a0 to:(id)a1;

@end
