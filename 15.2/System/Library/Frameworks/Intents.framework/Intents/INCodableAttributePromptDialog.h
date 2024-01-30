@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) unsigned long long type;

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
- (id)__INTypeCodableDescriptionTypeKey;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
