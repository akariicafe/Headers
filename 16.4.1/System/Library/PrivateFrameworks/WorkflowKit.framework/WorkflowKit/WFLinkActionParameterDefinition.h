@class NSDictionary, LNActionParameterMetadata, LNValueType;

@interface WFLinkActionParameterDefinition : NSObject

@property (readonly, nonatomic) LNValueType *valueType;
@property (readonly, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (readonly, nonatomic) Class parameterClass;
@property (readonly, nonatomic) NSDictionary *typeSpecificMetadata;
@property (readonly, nonatomic) NSDictionary *parameterDefinitionDictionary;

- (void).cxx_destruct;
- (id)parameterStateFromLinkValue:(id)a0;
- (BOOL)boolForTypeSpecificMetadataKey:(id)a0 defaultValue:(BOOL)a1;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (long long)integerForTypeSpecificMetadataKey:(id)a0 defaultValue:(long long)a1;
- (id)linkValueFromParameterState:(id)a0;
- (id)linkValueWithValue:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)objectForTypeSpecificMetadataKey:(id)a0 ofClass:(Class)a1;

@end
