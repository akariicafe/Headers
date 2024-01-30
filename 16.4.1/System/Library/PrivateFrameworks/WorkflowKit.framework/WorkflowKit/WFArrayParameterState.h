@class NSArray, NSUUID, NSString;

@interface WFArrayParameterState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSUUID *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithValues:(id)a0 identity:(id)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2 processSingleVariableStringsAsContentItems:(BOOL)a3;

@end
