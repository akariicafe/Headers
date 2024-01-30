@class UITextView, NSString, HUActivityLoadingView, NAFuture, UIView, NSAttributedString, UIBarButtonItem;

@interface HUTextViewController : UIViewController <HUPreloadableViewController>

@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) UIView *curtainView;
@property (copy, nonatomic) NSString *titleText;
@property (readonly, nonatomic) HUActivityLoadingView *loadingView;
@property (nonatomic) BOOL showProgressIndicatorView;
@property (readonly, nonatomic) UIBarButtonItem *shareButton;
@property (retain, nonatomic) NAFuture *loadingFuture;
@property (copy, nonatomic) NSAttributedString *textContent;
@property (nonatomic) BOOL showsShareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_fulfillProgressIndicatorState:(BOOL)a0;
- (void)_shareLog:(id)a0;
- (id)_textContentWithDefaultAttributes;
- (id)hu_preloadContent;
- (id)initWithTextTitle:(id)a0;
- (void)loadTextFromFuture:(id)a0 textTitle:(id)a1;
- (void)setShowProgressIndicatorView:(BOOL)a0 animated:(BOOL)a1;

@end
