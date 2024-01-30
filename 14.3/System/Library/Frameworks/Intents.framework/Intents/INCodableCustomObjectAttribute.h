@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute

@property (copy, nonatomic) NSString *objectTypeName;
@property (copy, nonatomic) NSString *objectTypeNamespace;
@property (weak, nonatomic) INCodableDescription *codableDescription;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (long long)valueType;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)resolutionResultClass;
- (id)valueTransformer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)objectClass;
- (id)__INCodableDescriptionObjectTypeKey;
- (id)__INCodableDescriptionObjectTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
- (id)__INTypeCodableDescriptionObjectTypeKey;
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)_unsafeObjectClass;
- (void)encodeWithCoder:(id)a0;

@end
