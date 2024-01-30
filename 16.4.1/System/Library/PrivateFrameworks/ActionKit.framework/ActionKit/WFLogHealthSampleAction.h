@class NSDate;

@interface WFLogHealthSampleAction : WFAction

@property (retain, nonatomic) NSDate *currentDate;

- (id)appIdentifier;
- (void).cxx_destruct;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (id)outputContentClasses;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)saveObject:(id)a0 withObjectType:(id)a1 item:(id)a2;
- (id)dateForParameterValueWithKey:(id)a0 error:(id *)a1;
- (void)forceUpdateSelectedUnit;
- (void)handleWithCategoryType:(id)a0;
- (void)handleWithQuantityType:(id)a0;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)resourceAvailabilityChanged;
- (void)updateParameterStates;

@end
