@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) MPAVRoute *route;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithRoute:(id)a0;
- (void).cxx_destruct;

@end
