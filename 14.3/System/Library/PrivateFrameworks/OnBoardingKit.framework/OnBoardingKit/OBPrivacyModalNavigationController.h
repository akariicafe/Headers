@interface OBPrivacyModalNavigationController : OBNavigationController

@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) BOOL darkMode;

- (void).cxx_destruct;
- (long long)preferredUserInterfaceStyle;
- (void)addDismissButtonWithPressedHandler:(id /* block */)a0;
- (void)_doneButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
