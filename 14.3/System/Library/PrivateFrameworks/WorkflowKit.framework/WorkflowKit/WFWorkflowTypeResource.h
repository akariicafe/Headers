@class NSString, WFWorkflow;

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing>

@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mustBeAvailableForDisplay;

@end
