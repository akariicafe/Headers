@class NSString, NSArray, INCodableAttribute;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)__NameKey;
+ (id)__ParametersKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__DeprecatedKey;
+ (id)__InputKey;
+ (id)__TitleIDKey;
+ (id)__DefaultImageNameKey;
+ (id)__Key;
+ (id)__ParameterKey;
+ (id)__CategoryKey;
+ (id)__KeyParameterKey;
+ (id)__ClassNameKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__VerbAssociationsKey;
+ (id)__ClassPrefixKey;
+ (id)__DescriptionIDKey;
+ (id)__SummaryKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__TitleKey;
+ (id)__DescriptionKey;
+ (id)__VerbKey;
+ (id)__ConfigurableKey;
+ (id)__EntityKey;
+ (id)__PhrasesKey;

- (void)updateWithDictionary:(id)a0;
- (id)_attributesKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (id)_attributeKey;
- (id)initWithCoder:(id)a0;
- (id)_ignoredAttributeTags;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
