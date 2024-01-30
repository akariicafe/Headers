@class PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier;

- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)disableScreenTime:(id)a0;
- (void)confirmStopSharingScreenTime:(id)a0;

@end
