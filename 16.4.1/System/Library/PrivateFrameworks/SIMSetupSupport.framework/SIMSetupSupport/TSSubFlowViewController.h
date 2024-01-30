@class TSSIMSetupFlow, NSString, UIView, UIViewController;
@protocol TSSIMSetupFlowDelegate;

@interface TSSubFlowViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property unsigned long long subFlowType;
@property (retain) UIViewController *firstViewController;
@property BOOL isViewControllerPresenting;
@property BOOL isViewControllerPresented;
@property (retain) UIView *snapshot;
@property (weak) UIViewController *prevViewController;
@property (retain) TSSIMSetupFlow *subFlow;
@property BOOL isOfferFallbackFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepare:(id /* block */)a0;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (void)takeScreenShot:(id)a0;
- (void)_presentFirstViewController;
- (long long)backOption;
- (id)initWithOptions:(id)a0 navigationController:(id)a1;

@end
