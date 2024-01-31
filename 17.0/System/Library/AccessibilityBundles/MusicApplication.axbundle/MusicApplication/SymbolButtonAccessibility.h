@interface SymbolButtonAccessibility : __SymbolButtonAccessibility_super

@property (nonatomic) BOOL accessibilityIsInCell;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)accessibilityUpdateSymbolButton;
- (id)_accessibilityLabelHelper;
- (id)_axCustomView;
- (BOOL)_axIsCircularProgressView;

@end
