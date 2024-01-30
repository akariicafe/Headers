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

- (void)cancel:(id)a0;
- (void)back:(id)a0;
- (void).cxx_destruct;
- (void)requestCancel;
- (void)requestAdvanceToNextInFlow;
- (void)setAdvanceButtonEnabled:(BOOL)a0;
- (id)initWithFlowController:(id)a0;
- (void)_updateActions;
- (void)done:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)next:(id)a0;
- (void)viewDidLoad;

@end
