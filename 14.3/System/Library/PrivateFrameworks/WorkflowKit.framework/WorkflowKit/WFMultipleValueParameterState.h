@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)finishProcessingWithContent:(id)a0 error:(id)a1 forParameterStateClass:(Class)a2 valueHandler:(id /* block */)a3;
- (id)stateByTogglingValue:(id)a0;
- (id)stateByReplacingValueAtIndex:(unsigned long long)a0 withValue:(id)a1;
- (id)stateByAppendingValue:(id)a0;
- (id)stateByRemovingValueAtIndex:(unsigned long long)a0;
- (id)stateByInsertingValueAtIndex:(unsigned long long)a0 withValue:(id)a1;

@end
