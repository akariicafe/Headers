@class PKContactResolver, NSString, PKSubcredentialInvitationFlowControllerContext, PKAppletSubcredentialSharingSession;
@protocol PKSubcredentialInvitationFlowControllerProtocol, PKSubcredentialProvisioningViewModelProtocol;

@interface PKSubcredentialInvitationViewController : PKPassShareRedemptionViewController <PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {
    PKAppletSubcredentialSharingSession *_session;
    id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
    id<PKSubcredentialProvisioningViewModelProtocol> _remoteProvisioningViewModel;
    NSString *_contactName;
    PKContactResolver *_contactResolver;
    BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
}

@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (void)viewDidLoad;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1 inState:(long long)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (void)subcredentialProvisioningController:(id)a0 shouldFailAfterError:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (id)_bodyTextForContext:(id)a0;
- (id)_titleTextForContext:(id)a0;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)advanceToNextState;
- (void)continueButtonPressed;
- (void)continueLaterButtonPressed;
- (id)sharingSessionWithDelegate:(id)a0 startSession:(BOOL)a1;
- (void)startLocalDeviceProvisioning;
- (void)startRemoteDeviceProvisioning;

@end
