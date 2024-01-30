@interface UITableViewHeaderFooterViewAccessibility : __UITableViewHeaderFooterViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)a0;

@end
