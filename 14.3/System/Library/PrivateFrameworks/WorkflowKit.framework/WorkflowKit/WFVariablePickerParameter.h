@interface WFVariablePickerParameter : WFEnumerationParameter

- (id)possibleStates;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (BOOL)alwaysShowsButton;
- (id)importQuestionBehavior;

@end
