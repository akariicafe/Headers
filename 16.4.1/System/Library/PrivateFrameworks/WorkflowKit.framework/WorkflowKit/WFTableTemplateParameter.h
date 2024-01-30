@interface WFTableTemplateParameter : WFParameter

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable;
@property (readonly, copy, nonatomic) id additionalRowSerializedRepresentation;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (Class)singleStateClass;

@end
