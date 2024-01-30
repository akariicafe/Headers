@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

@property (retain, nonatomic) NSExtension *extension;

- (id)displayName;
- (void)setPrimaryLanguage:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void).cxx_destruct;
- (id)containingBundle;
- (id)_indicatorIconWithBackground:(BOOL)a0 scaleFactor:(double)a1;
- (id)containingBundleDisplayName;
- (BOOL)defaultLayoutIsASCIICapable;
- (id)extendedDisplayName;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (BOOL)isAllowedForTraits:(id)a0;
- (BOOL)isDefaultRightToLeft;
- (BOOL)isDesiredForTraits:(id)a0;
- (BOOL)isExtensionInputMode;
- (BOOL)isStalledExtensionInputMode;
- (id)normalizedIdentifierLevels;

@end
