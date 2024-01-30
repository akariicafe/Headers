@class NSSet, WFWorkflow;

@interface WFInputAction : WFAction

@property (nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) NSSet *inputSurfaces;

+ (id)inputActionForWorkflow:(id)a0;

- (BOOL)isDeletable;
- (void).cxx_destruct;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)updateWorkflowState;
- (void)removedFromWorkflow;
- (id)minimumSupportedClientVersion;
- (id)selectedInputTypes;
- (id)noInputBehavior;

@end
