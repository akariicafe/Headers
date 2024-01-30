@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

- (void)updateWithDictionary:(id)a0;
- (long long)valueType;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)resolutionResultClass;
- (id)__INCodableDescriptionTypeKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)objectClass;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:(id)a0 type:(long long)a1;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;

@end
