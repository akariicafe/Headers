@class NSDate, NSString, WFContentCollection, WFContentItemCache, NSSet, WFControlFlowAttributionTracker, NSDictionary, WFContentAttributionTracker, WFWorkflowRunningContext, WFWorkflow;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) unsigned long long currentActionIndex;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long numberOfDialogsPresented;
@property (readonly, nonatomic) NSString *currentRunSource;
@property (readonly, nonatomic) unsigned long long outputBehavior;
@property (readonly, nonatomic) WFContentAttributionTracker *currentActionContentAttributionTracker;
@property (readonly, nonatomic) WFContentItemCache *contentItemCache;
@property (readonly, nonatomic) WFControlFlowAttributionTracker *flowTracker;
@property (readonly, nonatomic) NSSet *allowedOnceSmartPromptStates;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFContentCollection *currentInput;
@property (readonly, nonatomic) NSDictionary *currentProcessedParameters;

+ (void)getStateFromURL:(id)a0 completionHandler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkflow:(id)a0 variables:(id)a1 currentActionIndex:(unsigned long long)a2 runningContext:(id)a3 currentInput:(id)a4 currentProcessedParameters:(id)a5 startDate:(id)a6 currentRunSource:(id)a7 numberOfDialogsPresented:(long long)a8 outputBehavior:(unsigned long long)a9 contentAttributionTracker:(id)a10 contentItemCache:(id)a11 flowTracker:(id)a12 allowedOnceSmartPromptStates:(id)a13;

@end
