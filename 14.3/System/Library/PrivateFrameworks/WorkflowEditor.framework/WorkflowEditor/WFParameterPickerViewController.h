@class NSArray, NSString, WFWorkflow, WFWorkflowViewController;
@protocol WFParameterPickerViewControllerDelegate;

@interface WFParameterPickerViewController : UIViewController <WFModuleModelProvider>

@property (weak, nonatomic) WFWorkflowViewController *workflowViewController;
@property (retain, nonatomic) NSArray *excludedParameters;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) id<WFParameterPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)cancelPressed;
- (void)loadView;
- (id)createModelForAction:(id)a0;
- (void)component:(id)a0 didSelectAction:(id)a1 parameter:(id)a2;

@end
