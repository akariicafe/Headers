@class INStringLocalizer, NSString, INCodableAttribute;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, nonatomic) INStringLocalizer *stringLocalizer;
@property (copy, nonatomic) NSString *readableTitle;
@property (copy, nonatomic) NSString *readableSubtitle;

+ (id)processingValueClasses;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithValue:(id)a0 codableAttribute:(id)a1 stringLocalizer:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)resizeDisplayImageIfNecessary:(id)a0;

@end
