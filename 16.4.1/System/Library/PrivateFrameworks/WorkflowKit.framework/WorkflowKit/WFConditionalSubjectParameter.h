@interface WFConditionalSubjectParameter : WFParameter

- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (Class)stateClass;

@end
