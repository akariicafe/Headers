@interface WFStringSubstitutableState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

@end
