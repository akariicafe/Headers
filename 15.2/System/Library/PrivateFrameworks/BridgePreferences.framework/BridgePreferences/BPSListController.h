@interface BPSListController : PSListController

@property (nonatomic) BOOL deferringReloadSpecifiers;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)reloadSpecifiers;
- (long long)tableViewStyle;
- (BOOL)_readyToReloadSpecifiers;

@end
