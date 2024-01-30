@interface WFForEachRepeatAction : WFRepeatAction {
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)itemVariableName;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (id)providedVariableNames;
- (id)repeatCollectionWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (void)setRepeatCollection:(id)a0 withVariableSource:(id)a1;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;

@end
