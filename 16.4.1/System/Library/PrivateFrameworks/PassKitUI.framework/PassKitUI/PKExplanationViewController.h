@class NSString, PKExplanationView, UIActivityIndicatorView, OBPrivacyLinkController, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewDelegate> {
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
}

@property (weak, nonatomic) id<PKExplanationViewControllerDelegate> explanationViewControllerDelegate;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) BOOL showDoneButton;
@property (nonatomic) BOOL showCloseButton;
@property (readonly, nonatomic) PKExplanationView *explanationView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentScrollView;
- (void)viewDidLoad;
- (id)initWithContext:(long long)a0;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)_dismissViewController;
- (void)_cancelPressed;
- (void)_donePressed;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (unsigned long long)paymentSetupMarker;
- (BOOL)paymentSetupMarkerRemovalIsInclusive;
- (void)showNavigationBarSpinner:(BOOL)a0;

@end
