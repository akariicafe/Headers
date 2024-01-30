@interface OBPrivacyModalNavigationController : OBNavigationController

@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) BOOL darkMode;

- (BOOL)_canShowWhileLocked;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addDismissButtonWithPressedHandler:(id /* block */)a0;
- (void)_doneButtonPressed;

@end
