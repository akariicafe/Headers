@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL allowsSelfSizing;

- (void)_updateContentViewControllerHeight;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
