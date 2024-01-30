@class NSNumber, NSDecimalNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState

@property (retain, nonatomic) NSNumber *legacyNumber;
@property (readonly, nonatomic) NSDecimalNumber *decimalNumber;

+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithValue:(id)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
