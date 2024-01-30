@class NSSet;

@interface WFArrayParameter : WFParameter

@property (readonly, nonatomic) BOOL supportsVariables;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (Class)stateClass;

@end
