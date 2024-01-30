@class UIViewController;

@interface SKUISimpleContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)loadView;

@end
