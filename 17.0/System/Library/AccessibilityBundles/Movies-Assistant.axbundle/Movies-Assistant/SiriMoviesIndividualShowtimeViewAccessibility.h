@interface SiriMoviesIndividualShowtimeViewAccessibility : __SiriMoviesIndividualShowtimeViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (void)setSelected:(BOOL)a0;
- (BOOL)accessibilityIsShowtimeSelected;
- (BOOL)accessibilityIsShowtimeHighlighted;
- (void)setAccessibilityShowtimeHighlighted:(BOOL)a0;
- (void)setAccessibilityShowtimeSelected:(BOOL)a0;

@end
