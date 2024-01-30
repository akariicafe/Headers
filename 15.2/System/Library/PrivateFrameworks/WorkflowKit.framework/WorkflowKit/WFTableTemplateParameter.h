@interface WFTableTemplateParameter : WFParameter

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, copy, nonatomic) id additionalRowSerializedRepresentation;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)defaultSerializedRepresentation;
- (id)importQuestionBehavior;

@end
