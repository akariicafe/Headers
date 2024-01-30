@interface WFConditionalSubjectParameter : WFParameter

- (id)defaultSupportedVariableTypes;
- (Class)stateClass;
- (id)importQuestionBehavior;
- (BOOL)allowsMultipleValues;

@end
