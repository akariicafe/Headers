@interface _UIKeyShortcutHUDClientTraits : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isSystemApp) BOOL systemApp;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) BOOL hasArabicHardwareKeyboard;
@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol;

+ (id)traitsWithReferenceTraitEnvironment:(id)a0 referenceKeyboardEvent:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
