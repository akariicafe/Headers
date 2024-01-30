@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

@property (retain, nonatomic) NSExtension *extension;

- (id)displayName;
- (id)initWithIdentifier:(id)a0;
- (id)containingBundle;
- (void)setPrimaryLanguage:(id)a0;
- (void)dealloc;
- (BOOL)defaultLayoutIsASCIICapable;
- (BOOL)isStalledExtensionInputMode;
- (BOOL)isAllowedForTraits:(id)a0;
- (id)identifierWithLayouts;
- (BOOL)isExtensionInputMode;
- (id)extendedDisplayName;
- (id)_indicatorIconWithBackground:(BOOL)a0;
- (id)normalizedIdentifierLevels;
- (BOOL)showSWLayoutWithHWKeyboard;
- (BOOL)isDefaultRightToLeft;
- (id)containingBundleDisplayName;
- (BOOL)isDesiredForTraits:(id)a0;
- (id)hardwareLayout;

@end
