@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferredViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)viewDidLoad;
- (void)_skipButtonTapped;
- (id)initWithTransferredPlan:(id)a0;

@end
