@interface SearchUIContactViewController : CNContactViewController

+ (id)viewControllerForContact:(id)a0 isUnknown:(BOOL)a1;

- (id)keyCommands;
- (BOOL)canBecomeFirstResponder;
- (unsigned long long)edgesForExtendedLayout;
- (void)leftArrowPressed;

@end
