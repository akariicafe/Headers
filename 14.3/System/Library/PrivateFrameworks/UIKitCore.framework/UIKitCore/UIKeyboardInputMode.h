@class NSString, NSArray, NSBundle, NSExtension;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *normalizedIdentifier;
@property (retain, nonatomic) NSString *languageWithRegion;
@property (retain, nonatomic) NSString *softwareLayout;
@property (retain, nonatomic) NSString *hardwareLayout;
@property (retain, nonatomic) NSArray *multilingualLanguages;
@property (readonly, nonatomic) NSString *identifierWithLayouts;
@property (retain, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) NSString *automaticHardwareLayout;
@property (readonly, retain, nonatomic) NSArray *normalizedIdentifierLevels;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *extendedDisplayName;
@property (readonly, nonatomic) BOOL isDefaultRightToLeft;
@property (readonly, nonatomic) BOOL defaultLayoutIsASCIICapable;
@property (readonly, nonatomic) BOOL isExtensionInputMode;
@property (readonly, nonatomic) BOOL isStalledExtensionInputMode;
@property (nonatomic) BOOL extensionInputModeHasDictation;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSBundle *containingBundle;
@property (readonly, nonatomic) NSString *containingBundleDisplayName;
@property (nonatomic) BOOL isDisplayed;
@property (readonly, nonatomic) BOOL isSpecializedInputMode;
@property (readonly, nonatomic) BOOL isEmojiInputMode;
@property (readonly, nonatomic) BOOL supportsEmojiSearch;
@property (retain, nonatomic) NSString *dictationLanguage;
@property (readonly, nonatomic) NSString *dictationDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)hardwareLayoutFromIdentifier:(id)a0;
+ (id)intlInputMode;
+ (id)autofillSignupInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)a0;
+ (id)keyboardInputModeWithIdentifier:(id)a0;
+ (id)dictationInputMode;
+ (id)softwareLayoutFromIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)includeBarHeight;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAllowedForTraits:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDesiredForTraits:(id)a0;
- (void)setLastUsedDictationLanguage;
- (void)encodeWithCoder:(id)a0;

@end
