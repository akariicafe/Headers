@class PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier;

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)confirmStopSharingScreenTime:(id)a0;
- (void)disableScreenTime:(id)a0;

@end
