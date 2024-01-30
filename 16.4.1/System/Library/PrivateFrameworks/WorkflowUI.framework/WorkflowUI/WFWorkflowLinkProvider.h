@class NSString;

@interface WFWorkflowLinkProvider : WFWorkflowItemProvider

@property (copy, nonatomic) NSString *exclusiveActivityType;

- (id)item;
- (void).cxx_destruct;
- (void)generateItemURL;
- (id)initWithWorkflow:(id)a0 userInterface:(id)a1;
- (id)shareShortcutEventForActivityType:(id)a0;

@end
