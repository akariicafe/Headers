@interface WFLinkActionDateComponentsParameterDefinition : WFLinkActionParameterDefinition

- (long long)dateFormat;
- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)dateComponentsFromDateValue:(id)a0;
- (id)dateComponentsFromStringValue:(id)a0 error:(id *)a1;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
