@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionCodeKey;

@end
