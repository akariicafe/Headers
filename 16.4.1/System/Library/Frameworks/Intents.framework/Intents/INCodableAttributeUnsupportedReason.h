@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (BOOL)supportsSecureCoding;

- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionKey;
- (BOOL)isEqual:(id)a0;
- (id)__INTypeCodableDescriptionCodeKey;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (id)__INCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionKey;

@end
