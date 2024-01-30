@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController

@property (retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView;
@property (copy, nonatomic) id /* block */ dismissAction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_backButtonPressed:(id)a0;

@end
