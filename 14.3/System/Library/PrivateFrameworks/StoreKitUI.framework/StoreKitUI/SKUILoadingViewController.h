@class UIColor, SKUILoadingView, SKUIClientContext, NSString, SKUIColorScheme;

@interface SKUILoadingViewController : UIViewController

@property (retain, nonatomic) SKUILoadingView *loadingView;
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *spinnerColorScheme;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_initializeLoadingView;

@end
