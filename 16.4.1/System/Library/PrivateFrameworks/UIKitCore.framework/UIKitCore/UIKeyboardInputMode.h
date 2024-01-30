@class NSString, NSArray, UIImage, NSBundle, NSExtension;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *normalizedIdentifier;
@property (retain, nonatomic) NSString *languageWithRegion;
@property (retain, nonatomic) NSString *softwareLayout;
@property (retain, nonatomic) NSString *hardwareLayout;
@property (retain, nonatomic) NSArray *multilingualLanguages;
@property (retain, nonatomic) UIImage *cachedIcon;
@property (nonatomic) double cachedIconFactor;
@property (retain, nonatomic) NSString *cachedSizeCategory;
@property (readonly, nonatomic) NSString *identifierWithLayouts;
@property (retain, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) NSString *automaticHardwareLayout;
@property (readonly, nonatomic) BOOL showSWLayoutWithHWKeyboard;
@property (readonly, nonatomic) NSArray *normalizedIdentifierLevels;
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
@property (readonly, nonatomic) BOOL isHandwritingInputMode;
@property (readonly, nonatomic) BOOL supportsEmojiSearch;
@property (retain, nonatomic) NSString *dictationLanguage;
@property (readonly, nonatomic) NSString *dictationDisplayName;
@property (retain, nonatomic) NSString *defaultDictationLanguage;

+ (id)dictationInputMode;
+ (BOOL)supportsSecureCoding;
+ (id)keyboardInputModeWithIdentifier:(id)a0;
+ (id)hardwareLayoutFromIdentifier:(id)a0;
+ (id)intlInputMode;
+ (id)softwareLayoutFromIdentifier:(id)a0;
+ (id)autofillSignupInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)preferencesControllerChanged:(id)a0;
- (BOOL)includeBarHeight;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_fallbackIconLabel;
- (void)_getIconLabel:(out id *)a0 secondaryIconLabel:(out id *)a1;
- (id)_indicatorIconWithBackground:(BOOL)a0 scaleFactor:(double)a1;
- (void)drawStringInRect:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 useSmallFont:(BOOL)a2 useCondensedFont:(BOOL)a3 scale:(double)a4;
- (id)imageForInputModeLabel:(id)a0 secondaryIconLabel:(id)a1 withBackground:(BOOL)a2 scaleFactor:(double)a3;
- (id)indicatorIcon;
- (id)indicatorTextIcon;
- (BOOL)isAllowedForTraits:(id)a0;
- (BOOL)isDesiredForTraits:(id)a0;
- (BOOL)isDesiredForTraits:(id)a0 withExtended:(BOOL)a1;
- (double)languageIndicatorScale;
- (void)setLastUsedDictationLanguage;

@end
