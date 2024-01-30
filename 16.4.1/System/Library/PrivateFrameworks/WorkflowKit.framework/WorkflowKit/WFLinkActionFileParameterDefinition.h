@class NSArray;

@interface WFLinkActionFileParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) NSArray *supportedUTIs;

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
