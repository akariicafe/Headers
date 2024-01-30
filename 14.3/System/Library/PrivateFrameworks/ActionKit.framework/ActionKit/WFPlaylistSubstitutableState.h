@interface WFPlaylistSubstitutableState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithPlaylist:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
