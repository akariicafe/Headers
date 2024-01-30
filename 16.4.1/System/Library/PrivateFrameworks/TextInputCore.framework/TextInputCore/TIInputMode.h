@class NSString, NSArray, NSDictionary, NSLocale;

@interface TIInputMode : NSObject <NSCopying> {
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
}

@property (readonly, nonatomic) NSString *normalizedIdentifier;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) BOOL supportsPrediction;
@property (readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property (readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) BOOL doesComposeText;
@property (readonly, nonatomic) NSArray *allAccentKeyStrings;
@property (readonly, nonatomic) NSDictionary *layoutTags;
@property (readonly, nonatomic) NSDictionary *compositionMap;
@property (readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) NSString *autocorrectionLocaleIdentifier;

+ (id)inputModeWithIdentifier:(id)a0;

- (void)setQuickTypeKeyboardFeatureSpecializationClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithNormalizedIdentifier:(id)a0;
- (unsigned long long)hash;
- (Class)keyboardFeatureSpecializationClassFromInputModeProperties;
- (id)description;
- (void).cxx_destruct;

@end
