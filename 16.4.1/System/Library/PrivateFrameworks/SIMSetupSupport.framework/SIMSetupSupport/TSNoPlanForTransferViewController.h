@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSNoPlanForTransferViewController : TSOBTableWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    NSString *_deviceName;
    NSString *_phoneNumber;
    BOOL _showOtherOptions;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property unsigned long long entryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (id)initWithCarrier:(id)a0 transferCapability:(unsigned long long)a1 showOtherOptions:(BOOL)a2 entryPoint:(unsigned long long)a3;
- (void)_scanButtonTapped;
- (BOOL)isStartOverRequiredOnBackButtonTapped;

@end
