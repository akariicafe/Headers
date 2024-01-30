@class PSSpecifier;

@interface STNoUsageReportedGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *noUsageReportedAlertSpecifier;

- (id)init;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_devicesDidChange:(id)a0;

@end
