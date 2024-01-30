@class UIButton, IAMWebView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalWebMessageViewController : UIViewController

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IAMWebView *webView;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (nonatomic) BOOL shouldDisplayCloseButton;

- (id)initWithWebView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_handleCloseButtonTap:(id)a0;

@end
