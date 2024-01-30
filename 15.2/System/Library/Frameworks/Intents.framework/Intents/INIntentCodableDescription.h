@class NSString, NSArray, INCodableAttribute, NSNumber;

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
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSNumber *versioningHash;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)__EntityKey;
+ (id)__DescriptionIDKey;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__ParameterKey;
+ (id)__TitleKey;
+ (id)__ForegroundKey;
+ (id)__Key;
+ (id)__ParametersKey;
+ (id)__TitleIDKey;
+ (id)_intentClassNameWithDictionary:(id)a0;
+ (id)__VerbAssociationsKey;
+ (id)__CategoryKey;
+ (id)__DeprecatedKey;
+ (id)__KeyParameterKey;
+ (id)__DefaultImageNameKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__ConfigurableKey;
+ (id)__ClassPrefixKey;
+ (id)__ClassNameKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__PhrasesKey;
+ (id)__SummaryKey;
+ (id)__HashKey;
+ (id)__InputKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__VerbKey;
+ (id)__DescriptionKey;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_attributesKey;
- (void).cxx_destruct;
- (id)_ignoredAttributeTags;
- (id)initWithCoder:(id)a0;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributeKey;
- (id)attributes;

@end
