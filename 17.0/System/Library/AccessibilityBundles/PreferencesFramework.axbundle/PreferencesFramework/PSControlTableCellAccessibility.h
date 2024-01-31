@interface PSControlTableCellAccessibility : __PSControlTableCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)_accessibilityAbsoluteValue;

@end
