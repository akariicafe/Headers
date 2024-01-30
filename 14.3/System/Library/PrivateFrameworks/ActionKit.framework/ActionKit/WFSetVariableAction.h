@interface WFSetVariableAction : WFAction

- (id)variableName;
- (id)accessibilityName;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)providedVariableNames;

@end
