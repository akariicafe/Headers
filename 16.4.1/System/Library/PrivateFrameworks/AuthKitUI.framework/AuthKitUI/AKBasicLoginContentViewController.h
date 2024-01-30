@class AKBasicLoginContentViewControllerContainerView;

@interface AKBasicLoginContentViewController : UIViewController

@property (readonly, nonatomic) AKBasicLoginContentViewControllerContainerView *contentContainerView;

- (void)viewWillLayoutSubviews;
- (void)loadView;

@end
