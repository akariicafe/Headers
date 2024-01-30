@class INIntent, ATXAction, UIActivityIndicatorView, NSString, APUIWFLIntentController, CRKCardPresentation, UIViewController;
@protocol CRKCardViewControllerDelegate, APUIIntentHandlingViewControllerDelegate, CRKCardViewControlling;

@interface APUIIntentHandlingViewController : UIViewController <CRKCardPresentationDelegate, CRKCardViewControllerDelegate, APUIWFLIntentControllerDelegate>

@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) APUIWFLIntentController *wfIntentController;
@property (nonatomic) BOOL intentIsDirty;
@property (retain, nonatomic) CRKCardPresentation *cardPresentation;
@property (retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController;
@property (nonatomic) double preferredPlatterContentHeight;
@property (nonatomic) BOOL suppressSpinner;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) ATXAction *atxAction;
@property (nonatomic) long long executionContext;
@property (weak, nonatomic) id<APUIIntentHandlingViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (void)cardViewControllerDidLoad:(id)a0;
- (void)cardViewControllerBoundsDidChange:(id)a0;
- (void)launchAppWithCompletionHandler:(id /* block */)a0;
- (void)confirmationGranted:(BOOL)a0;
- (id)titleForConfirmAction;
- (void)beginRunningIntent;
- (void)intentController:(id)a0 requiresConfirmationForIntent:(id)a1 intentResponse:(id)a2;
- (void)intentController:(id)a0 requiresContinuingInAppForIntent:(id)a1 proceedHandler:(id /* block */)a2;
- (void)intentController:(id)a0 didHandleInteraction:(id)a1;
- (void)intentController:(id)a0 didFailWithError:(id)a1 forInteraction:(id)a2;
- (void)intentControllerDidFailAuthorizationCheck:(id)a0;
- (BOOL)intentController:(id)a0 shouldRequireConfirmationForIntent:(id)a1 intentResponse:(id)a2;
- (void)_setupProgressIndicator;
- (void)setPreferredPlatterContentHeight:(double)a0 notifyDelegate:(BOOL)a1;
- (void)_constructCardViewControllerForInteraction:(id)a0 completion:(id /* block */)a1;
- (void)_updateCardViewControllerForInteraction:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)_contentForCardRequestWithInteraction:(id)a0;
- (unsigned long long)_cardFormatForContentRequest:(id)a0;
- (void)_installChildViewController:(id)a0;
- (void)_createOrUpdateCardViewControllerForInteraction:(id)a0 completion:(id /* block */)a1;

@end
