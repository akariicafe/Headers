@class WFGranularAccessResourcePerWorkflowState, NSSet;

@interface WFGranularAccessResource : WFAccessResource

@property (readonly, nonatomic) WFGranularAccessResourcePerWorkflowState *currentGranularPerWorkflowState;
@property (retain, nonatomic) WFGranularAccessResourcePerWorkflowState *stateForRequestedEntries;
@property (readonly, nonatomic) NSSet *requestedEntries;
@property (readonly, nonatomic) NSSet *valuesWithNotDeterminedAccess;
@property (readonly, nonatomic) NSSet *valuesWithDeniedAccess;

+ (Class)perWorkflowStateClass;

- (void).cxx_destruct;
- (id)description;
- (void)updateStateForRequestedEntries;
- (void)setCurrentPerWorkflowState:(id)a0;
- (unsigned long long)workflowLevelStatus;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)a0 overridingPreviouslyDeterminedAuthorizations:(BOOL)a1;

@end
