@class NSDictionary, NSString, WFWorkflow;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation;
@property (readonly, nonatomic) NSString *workflowName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (id)policyFunctionName;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)workflowJavaScriptCoreRepresentationWithError:(id *)a0;
- (id)javaScriptCoreRepresentationWithError:(id *)a0;

@end
