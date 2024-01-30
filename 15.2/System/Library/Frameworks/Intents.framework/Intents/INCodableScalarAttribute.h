@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (long long)valueType;
- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyName:(id)a0 type:(long long)a1;
- (id)__INTypeCodableDescriptionTypeKey;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (Class)_relationshipValueTransformerClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
