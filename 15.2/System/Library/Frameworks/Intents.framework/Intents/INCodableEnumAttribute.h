@class NSString, INCodableEnum;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (long long)valueType;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (void)encodeWithCoder:(id)a0;
- (id)valueWithName:(id)a0;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)_relationshipValueTransformerClass;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (Class)resolutionResultClass;
- (unsigned long long)hash;

@end
