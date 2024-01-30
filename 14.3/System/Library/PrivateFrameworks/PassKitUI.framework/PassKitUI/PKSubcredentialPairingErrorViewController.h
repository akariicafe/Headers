@class NSString, PKExplanationView, PKSubcredentialPairingFlowControllerContext;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {
    PKExplanationView *_explainationView;
    BOOL _isAdvancing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void).cxx_destruct;
- (void)configureExplanationViewWithError:(id)a0;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)cancelButtonPressed;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
