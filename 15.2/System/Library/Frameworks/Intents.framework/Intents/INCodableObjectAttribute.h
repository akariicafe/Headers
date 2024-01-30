@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)setClassName:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (long long)valueType;
- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (Class)_relationshipValueTransformerClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
