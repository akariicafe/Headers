@class WFContentCollection, WFContextualActionContext;

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContentCollection *input;
@property (readonly, nonatomic) WFContextualActionContext *actionContext;

- (id)initWithDescriptor:(id)a0 presentationMode:(unsigned long long)a1 actionContext:(id)a2;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (void)runRequestByPopulatingMissingParameterStateWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)queueIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
