@class NSString, PKWatchHeroCardExplainationHeaderView, PKSubcredentialPairingFlowControllerContext;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKAddCredentialToWatchCompletedViewController : PKExplanationViewController <PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable> {
    PKWatchHeroCardExplainationHeaderView *_heroCardView;
}

@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (id)bodyText;
- (void).cxx_destruct;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)loadView;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;

@end
