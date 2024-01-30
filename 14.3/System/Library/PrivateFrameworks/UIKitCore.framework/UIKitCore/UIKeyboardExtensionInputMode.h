@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

@property (retain, nonatomic) NSExtension *extension;

- (id)containingBundle;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)hardwareLayout;
- (BOOL)isAllowedForTraits:(id)a0;
- (BOOL)defaultLayoutIsASCIICapable;
- (BOOL)isStalledExtensionInputMode;
- (BOOL)isExtensionInputMode;
- (id)extendedDisplayName;
- (BOOL)isDefaultRightToLeft;
- (id)normalizedIdentifierLevels;
- (id)containingBundleDisplayName;
- (BOOL)isDesiredForTraits:(id)a0;
- (void)setPrimaryLanguage:(id)a0;
- (id)identifierWithLayouts;
- (id)displayName;

@end
