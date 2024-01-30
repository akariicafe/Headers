@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController

@property (nonatomic) long long backdropViewPrivateStyle;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void)loadView;
- (id)initWithContentViewController:(id)a0;
- (void).cxx_destruct;

@end
