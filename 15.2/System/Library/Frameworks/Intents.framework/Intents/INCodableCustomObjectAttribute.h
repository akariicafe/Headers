@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute

@property (copy, nonatomic) NSString *objectTypeName;
@property (copy, nonatomic) NSString *objectTypeNamespace;
@property (weak, nonatomic) INCodableDescription *codableDescription;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (long long)valueType;
- (Class)objectClass;
- (id)__INCodableDescriptionObjectTypeNamespaceKey;
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionObjectTypeKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)_unsafeObjectClass;
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
- (id)initWithCoder:(id)a0;
- (Class)_relationshipValueTransformerClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (id)__INCodableDescriptionObjectTypeKey;
- (id)valueTransformer;

@end
