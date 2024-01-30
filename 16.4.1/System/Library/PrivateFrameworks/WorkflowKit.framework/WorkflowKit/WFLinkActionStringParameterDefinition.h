@interface WFLinkActionStringParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)autocapitalizationTypeFromStringCapitalizationType:(long long)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)keyboardTypeFromStringKeyboardType:(long long)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
