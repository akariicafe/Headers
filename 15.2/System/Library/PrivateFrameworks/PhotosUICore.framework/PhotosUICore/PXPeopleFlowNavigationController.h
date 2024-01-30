@class NSString, UIViewController, UIBarButtonItem;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController;
@property (retain, nonatomic) id<PXPeopleFlowController> flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)next:(id)a0;
- (void)back:(id)a0;
- (void).cxx_destruct;
- (void)done:(id)a0;
- (void)_updateActions;
- (void)requestCancel;
- (void)requestDone;
- (void)requestAdvanceToNextInFlow;
- (void)setAdvanceButtonEnabled:(BOOL)a0;
- (id)initWithFlowController:(id)a0;
- (BOOL)_enableBootstrapSpeedBump;

@end
