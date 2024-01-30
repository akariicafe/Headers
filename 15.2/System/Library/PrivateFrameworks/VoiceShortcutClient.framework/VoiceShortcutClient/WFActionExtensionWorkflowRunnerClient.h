@class NSDictionary;

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) NSDictionary *javaScriptRunners;

- (id)initWithWorkflowIdentifier:(id)a0 input:(id)a1 javaScriptRunners:(id)a2;
- (void).cxx_destruct;

@end
