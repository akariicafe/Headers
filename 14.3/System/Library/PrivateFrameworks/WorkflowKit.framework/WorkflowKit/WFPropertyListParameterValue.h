@class NSString;
@protocol WFParameterState;

@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState>

@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForValueType:(long long)a0;
+ (id)defaultStateForValueType:(long long)a0;
+ (Class)processedClassForValueType:(long long)a0;
+ (id)localizedTitleForValueType:(long long)a0;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithNumber:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithType:(long long)a0 state:(id)a1;
- (id)initWithStringState:(id)a0;
- (id)initWithDictionaryState:(id)a0;
- (id)initWithArrayState:(id)a0;
- (id)initWithNumberState:(id)a0;
- (id)initWithBooleanState:(id)a0;
- (id)initWithBoolean:(id)a0;

@end
