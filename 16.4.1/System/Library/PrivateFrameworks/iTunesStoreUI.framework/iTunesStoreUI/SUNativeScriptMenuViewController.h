@class NSArray, SUScriptFunction;

@interface SUNativeScriptMenuViewController : SUMenuViewController

@property (retain, nonatomic) SUScriptFunction *action;
@property (retain, nonatomic) NSArray *menuItems;

- (long long)numberOfMenuItems;
- (void)dealloc;
- (id)copyScriptViewController;
- (BOOL)isMenuItemEnabledAtIndex:(long long)a0;
- (void)performActionForMenuItemAtIndex:(long long)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;

@end
