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
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;

@end
