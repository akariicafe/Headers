@interface HUDashboardPresentationManager : NSObject <UINavigationControllerDelegate>

@property (class, nonatomic, readonly) HUDashboardPresentationManager *sharedManager;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)a0;
- (void)navigationController:(id)a0 willPresent:(id)a1 animated:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)navigationController:(id)a0 didPushItem:(id)a1;
- (void)navigationController:(id)a0 didUpdatePreferredPaletteHeight:(double)a1;
- (void)navigationController:(id)a0 willPushItem:(id)a1;

@end
