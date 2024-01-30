@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) unsigned long long numberOfLoops;

- (id)name;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (id)createAccompanyingActions;
- (id)providedVariableNames;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (BOOL)displaysParameterSummary;
- (BOOL)outputsMultipleItems;
- (id)defaultOutputName;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)a0;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;

@end
