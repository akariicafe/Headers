@class NSString, WFWorkflow;

@interface WFWorkflowEnvironmentResource : WFResource <WFWorkflowReferencing>

@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (void)refreshAvailability;
- (BOOL)workflowEnvironmentIsValid;

@end
