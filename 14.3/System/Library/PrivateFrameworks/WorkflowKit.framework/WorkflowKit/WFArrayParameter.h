@class NSSet;

@interface WFArrayParameter : WFParameter

@property (readonly, nonatomic) BOOL supportsVariables;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSupportedVariableTypes;
- (Class)stateClass;
- (id)defaultSerializedRepresentation;

@end
