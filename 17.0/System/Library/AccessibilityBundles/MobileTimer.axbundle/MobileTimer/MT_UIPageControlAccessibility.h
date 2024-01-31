@interface MT_UIPageControlAccessibility : __MT_UIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)_axPagingController;
- (void)_axStopWatchAdjustPage:(BOOL)a0;

@end
