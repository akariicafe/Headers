@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController

@property (retain, nonatomic) UIBarButtonItem *dismissButton;

- (BOOL)_canShowWhileLocked;
- (void)_dismiss;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRootSettings:(id)a0;
- (id)_initWithRootModule:(id)a0;
- (id)_defaultDismissButton;
- (void)_reloadWithRootModule:(id)a0;
- (id)initWithRootModuleController:(id)a0;

@end
