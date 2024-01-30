@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;

@end
