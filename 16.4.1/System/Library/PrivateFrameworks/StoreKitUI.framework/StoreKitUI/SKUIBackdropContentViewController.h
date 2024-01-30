@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController

@property (nonatomic) long long backdropViewPrivateStyle;
@property (retain, nonatomic) UIViewController *contentViewController;

- (id)initWithContentViewController:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
