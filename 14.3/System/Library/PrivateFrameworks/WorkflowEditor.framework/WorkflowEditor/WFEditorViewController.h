@class WFEditorHostingViewController, WFWorkflow;

@interface WFEditorViewController : UIViewController

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFEditorHostingViewController *hostingViewController;
@property (nonatomic, getter=isEditable) BOOL editable;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)loadView;

@end
