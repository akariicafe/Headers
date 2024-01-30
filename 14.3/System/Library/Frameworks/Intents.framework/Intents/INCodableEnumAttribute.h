@class NSString, INCodableEnum;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

- (void)updateWithDictionary:(id)a0;
- (long long)valueType;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)resolutionResultClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)_relationshipValueTransformerClass;
- (id)valueForIndex:(unsigned long long)a0;
- (id)valueWithName:(id)a0;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (void)encodeWithCoder:(id)a0;

@end
