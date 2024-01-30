@class UIColor, UIMenu;

@interface ICRDActivity : UIActivity

@property (class, readonly, nonatomic) UIColor *defaultTintColor;

@property (copy, nonatomic) id /* block */ performActivityBlock;
@property (copy, nonatomic) UIColor *activityTintColor;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL performActivityShouldDismissViewController;
@property (readonly, nonatomic) UIMenu *menu;
@property (nonatomic) long long contextPathEnum;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)performActivity;
- (void)performActivityWithCompletion:(id /* block */)a0;
- (id)initWithPerformActivity:(id /* block */)a0;

@end
