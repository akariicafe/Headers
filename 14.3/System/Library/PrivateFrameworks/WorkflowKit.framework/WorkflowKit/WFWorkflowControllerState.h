@class NSString, NSDictionary, WFWorkflowRunningContext, WFWorkflow, WFContentCollection;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) unsigned long long currentActionIndex;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) long long numberOfDialogsPresented;
@property (readonly, nonatomic) NSString *currentRunSource;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFContentCollection *currentInput;
@property (readonly, nonatomic) NSDictionary *currentProcessedParameters;

+ (void)getStateFromURL:(id)a0 completionHandler:(id /* block */)a1;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWorkflow:(id)a0 variables:(id)a1 currentActionIndex:(unsigned long long)a2 runningContext:(id)a3 currentInput:(id)a4 currentProcessedParameters:(id)a5 currentRunSource:(id)a6 numberOfDialogsPresented:(long long)a7;

@end
