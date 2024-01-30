@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL allowsSelfSizing;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updateContentViewControllerHeight;
- (id)initWithContentViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
