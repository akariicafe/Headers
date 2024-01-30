@class NSString, NSDictionary;
@protocol TSSIMSetupFlowDelegate;

@interface TSPhysicalTransferViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    NSDictionary *_plan;
    NSString *_deviceName;
    NSString *_phoneNumber;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)viewDidLoad;
- (id)initWithPlan:(id)a0;
- (void)_startPlanTransfer:(id)a0;
- (void)_continueButtonTapped;
- (void)_scanButtonTapped;

@end
