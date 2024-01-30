@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController

@property (retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView;
@property (copy, nonatomic) id /* block */ dismissAction;

- (void)viewDidLoad;
- (void)_backButtonPressed:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
