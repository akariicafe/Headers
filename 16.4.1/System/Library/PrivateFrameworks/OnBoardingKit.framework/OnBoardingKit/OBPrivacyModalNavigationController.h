@interface OBPrivacyModalNavigationController : OBNavigationController

@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) BOOL darkMode;

- (BOOL)_canShowWhileLocked;
- (long long)preferredUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)a0;

@end
