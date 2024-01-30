@class NSString, UIViewController;

@interface TSChooseOtherLineViewController : TSOBWelcomeController <TSSetupFlowItem>

@property (weak) UIViewController *hostController;
@property (retain, nonatomic) NSString *iccid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)prepare:(id /* block */)a0;
- (id)initWithHostController:(id)a0 iccid:(id)a1;
- (void)maybeShowDisableLineAlert:(id /* block */)a0;
- (void)fetchPlanItems:(id /* block */)a0;

@end
