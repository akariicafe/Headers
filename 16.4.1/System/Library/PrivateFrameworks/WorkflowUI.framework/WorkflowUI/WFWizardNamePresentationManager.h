@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) WFWorkflowWizardNameViewController *wizardNameViewController;
@property (readonly, nonatomic) BOOL presentsModally;

- (void)dismiss;
- (void)present;
- (void).cxx_destruct;
- (id)initWithNavigationController:(id)a0 wizardNameViewController:(id)a1;
- (void)presentModal;

@end
