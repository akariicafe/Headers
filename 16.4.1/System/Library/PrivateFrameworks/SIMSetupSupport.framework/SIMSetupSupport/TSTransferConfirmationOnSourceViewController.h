@class NSString, CTDeviceIdentifier, CTPlanList;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferConfirmationOnSourceViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    CTPlanList *_transferPlanList;
    CTDeviceIdentifier *_deviceId;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)userInteractionEnabled;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (id)initWithSelectedPlansNeedingConsent:(id)a0 deviceId:(id)a1;

@end
