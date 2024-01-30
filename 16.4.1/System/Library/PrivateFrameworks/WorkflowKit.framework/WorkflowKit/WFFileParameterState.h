@interface WFFileParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)processForMultipleStateWithContext:(id)a0 error:(id *)a1 resolution:(long long *)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)requestAccessToFileWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)resolveFileURLWithContext:(id)a0 error:(id *)a1;

@end
