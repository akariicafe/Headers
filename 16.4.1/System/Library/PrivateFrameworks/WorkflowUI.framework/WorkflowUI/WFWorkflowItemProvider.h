@class NSURL, WFShortcutExporter, WFWorkflow;
@protocol WFUserInterfaceHost;

@interface WFWorkflowItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *workflowURL;
@property (retain, nonatomic) WFShortcutExporter *shortcutExporter;
@property (nonatomic) BOOL shouldShowSuccessCheckmark;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterface;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (void)generateItemURL;
- (BOOL)hasWorkflowURL;
- (id)initWithWorkflow:(id)a0 userInterface:(id)a1 placeholderItem:(id)a2;
- (id)shareShortcutEventForActivityType:(id)a0;

@end
