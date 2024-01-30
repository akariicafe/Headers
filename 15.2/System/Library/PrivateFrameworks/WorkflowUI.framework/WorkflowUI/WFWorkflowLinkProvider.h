@class NSString;

@interface WFWorkflowLinkProvider : WFWorkflowItemProvider

@property (copy, nonatomic) NSString *exclusiveActivityType;

- (void).cxx_destruct;
- (id)item;
- (id)initWithWorkflow:(id)a0 userInterface:(id)a1;
- (id)shareShortcutEventForActivityType:(id)a0;
- (void)generateItemURL;

@end
