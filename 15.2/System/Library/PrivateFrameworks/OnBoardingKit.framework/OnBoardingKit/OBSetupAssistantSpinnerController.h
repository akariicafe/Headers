@class OBPrivacyLinkController, NSString, UIActivityIndicatorView, UILabel, UIScrollView, UIView;

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (nonatomic, getter=isActivityIndicatorHidden) BOOL activityIndicatorHidden;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTextColor;
- (void)_updateLayout;
- (void)viewWillAppear:(BOOL)a0;
- (id)_textStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_shouldUseScrollView;
- (id)initWithSpinnerText:(id)a0;
- (void)loadView;
- (void)updateDirectionalLayoutMargins;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_activityIndicatorViewStyle;

@end
