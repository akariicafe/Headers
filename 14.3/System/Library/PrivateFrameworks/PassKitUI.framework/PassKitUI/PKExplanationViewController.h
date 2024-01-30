@class NSString, PKExplanationView, UIActivityIndicatorView, OBPrivacyLinkController, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate> {
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
@property (readonly, nonatomic) PKExplanationView *explanationView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(long long)a0;
- (id)contentScrollView;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cancelPressed;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)_dismissViewController;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (void)_donePressed;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
