@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) MPAVRoute *route;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (void).cxx_destruct;
- (id)initWithRoute:(id)a0;

@end
