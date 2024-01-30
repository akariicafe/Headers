@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController

@property (retain, nonatomic) WKWebView *consentView;
@property (nonatomic) BOOL isFamilyAndFriendsConsent;
@property (retain, nonatomic) id<HUFeedbackConsentViewControllerDelegate> consentDelegate;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)htmlString;
- (id)initWithConsentDelegate:(id)a0;
- (void)didDeclineConsent;
- (void)didAcceptConsent;
- (id)consentFormFilePath;

@end
