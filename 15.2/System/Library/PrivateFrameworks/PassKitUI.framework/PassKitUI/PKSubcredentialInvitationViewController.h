@class PKContactResolver, NSString, PKSubcredentialInvitationFlowControllerContext, PKAppletSubcredentialSharingSession, PKHeroCardExplainationHeaderView;
@protocol PKSubcredentialInvitationFlowControllerProtocol, PKSubcredentialProvisioningViewModelProtocol;

@interface PKSubcredentialInvitationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {
    PKAppletSubcredentialSharingSession *_session;
    PKHeroCardExplainationHeaderView *_heroCardView;
    id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
    id<PKSubcredentialProvisioningViewModelProtocol> _remoteProvisioningViewModel;
    NSString *_contactName;
    PKContactResolver *_contactResolver;
    BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;

- (void)resetState;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1 inState:(long long)a2;
- (void)subcredentialProvisioningController:(id)a0 shouldFailAfterError:(id)a1 withCompletion:(id /* block */)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)showActivityIndicator:(BOOL)a0;
- (void)showSuccessCheckmark:(BOOL)a0;
- (void)advanceToNextState;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (id)sharingSessionWithDelegate:(id)a0;
- (id)bodyTextForContext:(id)a0;
- (void)startLocalDeviceProvisioning;
- (void)startRemoteDeviceProvisioning;

@end
