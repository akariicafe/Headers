@class WFWorkflowRecord, NSString, NSDictionary, WFWorkflow;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation;
@property (readonly, nonatomic) NSString *workflowName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (id)policyFunctionName;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)initWithWorkflowRecord:(id)a0;
- (id)workflowJavaScriptCoreRepresentationWithError:(id *)a0;
- (id)javaScriptCoreRepresentationWithError:(id *)a0;

@end
