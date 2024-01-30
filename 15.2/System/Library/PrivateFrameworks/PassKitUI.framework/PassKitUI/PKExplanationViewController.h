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

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithContext:(long long)a0;
- (id)contentScrollView;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)_dismissViewController;
- (void)_donePressed;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (void)_cancelPressed;

@end
