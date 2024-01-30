@class NSString, PSSpecifier, NSMutableSet, PSStackPushAnimationController;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    PSStackPushAnimationController *_stackAnimationController;
    unsigned long long _supportedOrientationsOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readPreferenceValue:(id)a0;
+ (void)setPreferenceValue:(id)a0 specifier:(id)a1;
+ (BOOL)processedBundle:(id)a0 parentController:(id)a1 parentSpecifier:(id)a2 bundleControllers:(id *)a3 settings:(id)a4;
+ (void)writePreference:(id)a0;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)setRootController:(id)a0;
- (void)suspend;
- (id)rootController;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)addTask:(id)a0;
- (id)specifier;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)setParentController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleURL:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)busy;
- (void).cxx_destruct;
- (void)_setNavigationBarHidden:(BOOL)a0 edge:(unsigned long long)a1 duration:(double)a2;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)showLeftButton:(id)a0 withStyle:(long long)a1 rightButton:(id)a2 withStyle:(long long)a3;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (void)pushController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (void)pushController:(id)a0 animate:(BOOL)a1;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;
- (void)logSettingsPath;
- (void)_delayedControllerReleaseAfterPop:(id)a0;
- (id)aggregateDictionaryPath;
- (id)contentViewForTopController;
- (BOOL)deallocating;
- (void)didDismissFormSheetView;
- (void)didDismissPopupView;
- (void)pushControllersAsStack:(id)a0;
- (void)sendWillBecomeActive;
- (void)sendWillResignActive;
- (void)statusBarWillChangeHeight:(id)a0;
- (void)taskFinished:(id)a0;
- (BOOL)taskIsRunning:(id)a0;
- (id)tasksDescription;
- (void)willDismissFormSheetView;
- (void)willDismissPopupView;

@end
