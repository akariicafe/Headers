@interface WFContactSubstitutableState : WFMultipleValueParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithValue:(id)a0;
- (id)collectionByConvertingStringItemsToHandles:(id)a0 allowsCustomHandles:(BOOL)a1;
- (void)processContentCollection:(id)a0 context:(id)a1 fromVariable:(BOOL)a2 valueHandler:(id /* block */)a3;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)a0;
- (id)stringInterpretedAsContactHandle:(id)a0 allowsCustomHandles:(BOOL)a1;
- (id)valueItemClasses;

@end
