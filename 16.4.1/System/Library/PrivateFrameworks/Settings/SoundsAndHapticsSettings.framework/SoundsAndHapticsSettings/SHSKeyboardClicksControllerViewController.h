@class NSString;

@interface SHSKeyboardClicksControllerViewController : PSListController

@property (class, readonly) NSString *combinedDescription;

- (id)specifiers;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_hapticValue:(id)a0;
- (void)_setHapticValue:(id)a0 specifier:(id)a1;
- (void)_setSoundValue:(id)a0 specifier:(id)a1;
- (void)_updateReloadSpecifierInParentController;

@end
