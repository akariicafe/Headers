@class PSSpecifier;

@interface STNoUsageReportedGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *noUsageReportedAlertSpecifier;

- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_devicesDidChange:(id)a0;

@end
