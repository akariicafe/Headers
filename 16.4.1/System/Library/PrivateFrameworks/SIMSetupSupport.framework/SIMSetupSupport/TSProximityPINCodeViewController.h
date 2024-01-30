@class NSString, UILabel;
@protocol TSSIMSetupFlowDelegate;

@interface TSProximityPINCodeViewController : TSOBWelcomeController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) NSString *pin;
@property (retain, nonatomic) UILabel *pinCodeLabel;
@property BOOL isIdleTimerDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPIN:(id)a0;
- (void)updatePIN:(id)a0;

@end
