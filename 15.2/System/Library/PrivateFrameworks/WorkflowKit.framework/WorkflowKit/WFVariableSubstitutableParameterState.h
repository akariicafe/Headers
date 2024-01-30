@class WFVariable, NSString;
@protocol NSObject;

@interface WFVariableSubstitutableParameterState : NSObject <WFParameterState>

@property (readonly, nonatomic) id<NSObject> value;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
+ (id)processingValueClasses;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(id)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (BOOL)stateIsEquivalent:(id)a0;

@end
