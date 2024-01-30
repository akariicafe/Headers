@class UIStackView, SKUIReviewInAppRatingHeaderView, UIVisualEffectView, NSString, SKUIStarRatingControl, NSMutableArray, UIInterfaceAction;

@interface SKUIReviewInAppRatingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInterfaceActionHandlerInvocationDelegate>

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) SKUIReviewInAppRatingHeaderView *headerView;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIInterfaceAction *ratingControlAction;
@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ ratingHandler;
@property (nonatomic) BOOL disableSubmit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)_actions;
- (void)viewDidLoad;
- (void)_ratingControlChanged:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 icon:(id)a2;
- (void)reloadViewsConfiguration;
- (id)_actionsLayoutAxesForCurrentState;
- (id)_buttonActionWithTitle:(id)a0 style:(unsigned long long)a1;

@end
