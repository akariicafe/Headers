@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) unsigned long long numberOfLoops;

- (id)name;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;
- (id)createAccompanyingActions;
- (id)defaultOutputName;
- (BOOL)displaysParameterSummary;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)a0;
- (BOOL)outputsMultipleItems;
- (id)providedVariableNames;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;

@end
