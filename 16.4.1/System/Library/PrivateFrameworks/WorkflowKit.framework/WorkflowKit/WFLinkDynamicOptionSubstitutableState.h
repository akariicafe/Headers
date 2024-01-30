@class NSString, WFImage;

@interface WFLinkDynamicOptionSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL valueNeedsDisplayRepresentation;

+ (Class)processingValueClass;
+ (id)serializedIdentifierFromLinkValue:(id)a0;
+ (id)serializedRepresentationFromLinkValue:(id)a0;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
+ (id)valueFromSerializedValueRepresentation:(id)a0 valueType:(id)a1 variableProvider:(id)a2 parameter:(id)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 image:(id)a3;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (BOOL)stateIsEquivalent:(id)a0;

@end
