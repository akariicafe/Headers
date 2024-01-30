@class NSString, PKSubcredentialPairingFlowControllerContext, PKHeroCardExplainationHeaderView, UIViewController;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingCompletedViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable> {
    BOOL _isLastOperation;
    BOOL _isPassExpress;
    PKHeroCardExplainationHeaderView *_heroCardView;
    UIViewController *_nextVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;

@end
