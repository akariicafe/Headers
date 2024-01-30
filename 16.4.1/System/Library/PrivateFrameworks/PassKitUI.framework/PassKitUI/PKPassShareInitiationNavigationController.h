@class PKSharedPassSharesController, NSString, PKShareInitiationAnalyticsReporter, PKShareableCredentialsMessageComposeViewController, PKInterceptableActivityViewController, PKPassShareInitiationContext, PKPassSharePreviewViewController, MFMessageComposeViewController;
@protocol PKClientShareSecureElementPassViewControllerDelegate;

@interface PKPassShareInitiationNavigationController : PKNavigationController <PKPassSharePreviewViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate, MFMessageComposeViewControllerDelegate, PKPassShareActivationOverviewViewControllerDelegate> {
    PKSharedPassSharesController *_sharesController;
    PKShareableCredentialsMessageComposeViewController *_messageComposer;
    MFMessageComposeViewController *_carKeyMessageComposer;
    PKPassShareInitiationContext *_context;
    PKShareInitiationAnalyticsReporter *_analyticsReporter;
    PKPassSharePreviewViewController *_previewViewController;
    PKInterceptableActivityViewController *_activityViewController;
    unsigned long long _currentStep;
    BOOL _hasAppeared;
}

@property (weak, nonatomic) id<PKClientShareSecureElementPassViewControllerDelegate> shareDelegate;
@property (nonatomic) BOOL shouldPromptUserToShare;
@property (nonatomic) BOOL isFromPeopleScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)_activityItemForActivationCode;
- (void)_flowDidCancel;
- (void)_flowDidCancelWithError:(id)a0;
- (void)_flowDidFinishWithSuccess;
- (id)_placeholderActivityItem;
- (void)_revokeCreatedShareWithCompletion:(id /* block */)a0;
- (void)_sendOverLegacyCarKeyiMessage;
- (void)_sendOverSelectedChannel;
- (void)_sendOveriMessage;
- (void)_sendOveriMessageUsingComposeViewController;
- (void)_transitionToNextStep;
- (unsigned long long)_transitionToNextStepIsMockTransition:(BOOL)a0;
- (void)_transitionToStep:(unsigned long long)a0;
- (void)_updateShareActivationOptions;
- (id)initWithSharesController:(id)a0 environment:(unsigned long long)a1;
- (void)interceptableActivityViewController:(id)a0 didFinishWithShare:(BOOL)a1;
- (void)interceptableActivityViewController:(id)a0 didInterceptActivitySelectionOfType:(id)a1;
- (BOOL)interceptableActivityViewController:(id)a0 shouldInterceptActivitySelectionOfType:(id)a1;
- (void)passShareIntroductionExplanationViewControllerDidCancel:(id)a0;
- (void)passShareIntroductionExplanationViewControllerDidContinue:(id)a0;
- (void)shareActivationOverviewViewControllerDidFinish:(id)a0;
- (void)shareActivationOverviewViewControllerDidSelectShareCode:(id)a0;
- (void)shareActivityDidFinishWithShare:(BOOL)a0;
- (void)sharePreviewViewControllerDidCancel:(id)a0;
- (void)sharePreviewViewControllerDidContinue:(id)a0;

@end
