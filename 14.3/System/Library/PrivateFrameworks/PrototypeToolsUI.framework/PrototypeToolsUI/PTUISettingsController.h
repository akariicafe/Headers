@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController

@property (retain, nonatomic) UIBarButtonItem *dismissButton;

- (void).cxx_destruct;
- (id)initWithRootSettings:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)_dismiss;
- (BOOL)_canShowWhileLocked;
- (id)initWithRootModuleController:(id)a0;
- (id)_defaultDismissButton;
- (id)_initWithRootModule:(id)a0;
- (void)_reloadWithRootModule:(id)a0;

@end
