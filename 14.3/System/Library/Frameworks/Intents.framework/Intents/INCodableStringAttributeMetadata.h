@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL disableAutocorrect;
@property (nonatomic) BOOL disableSmartDashes;
@property (nonatomic) BOOL disableSmartQuotes;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *defaultValueID;
@property (nonatomic) long long capitalization;
@property (readonly, copy, nonatomic) NSString *localizedDefaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (void)encodeWithCoder:(id)a0;

@end
