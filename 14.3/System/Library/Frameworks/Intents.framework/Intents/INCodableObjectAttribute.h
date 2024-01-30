@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

- (void)updateWithDictionary:(id)a0;
- (long long)valueType;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)resolutionResultClass;
- (id)__INCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)objectClass;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setClassName:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (Class)_relationshipValueTransformerClass;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;

@end
