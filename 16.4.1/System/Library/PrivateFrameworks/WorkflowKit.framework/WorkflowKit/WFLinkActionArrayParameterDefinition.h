@class LNArrayValueType;

@interface WFLinkActionArrayParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) LNArrayValueType *valueType;

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithMemberValueType:(id)a0 parameterMetadata:(id)a1;
- (id)linkValueFromParameterState:(id)a0;
- (id)linkValueFromProcessedParameterValue:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)memberParameterDefinition;
- (id)parameterDefinitionDictionary;

@end
