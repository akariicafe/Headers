@class AKBasicLoginContentViewControllerContainerView;

@interface AKBasicLoginContentViewController : UIViewController

@property (readonly, nonatomic) AKBasicLoginContentViewControllerContainerView *contentContainerView;

- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
