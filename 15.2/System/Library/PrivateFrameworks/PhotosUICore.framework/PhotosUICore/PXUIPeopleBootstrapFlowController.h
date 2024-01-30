@class PHPerson, PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController

@property (retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (retain, nonatomic) PXPeopleBootstrapFinalViewController *finalViewController;
@property (readonly, nonatomic) PHPerson *sourcePerson;

- (void).cxx_destruct;
- (void)done:(id)a0;
- (void)computeViewControllersForBootstrapFlow;
- (void)recomputeViewControllersForChangeInKeyPath:(id)a0;
- (id)_postNamingViewControllers;

@end
