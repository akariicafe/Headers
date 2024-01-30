@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INTypeCodableDescriptionCodeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;

@end
