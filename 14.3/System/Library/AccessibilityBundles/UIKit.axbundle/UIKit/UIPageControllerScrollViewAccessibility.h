@interface UIPageControllerScrollViewAccessibility : __UIPageControllerScrollViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)_accessibilityScrollStatus;
- (double)_accessibilityScrollWidthDistance;
- (double)_accessibilityScrollAnimationDurationDelay;
- (void)_accessibilitySendScrollStatus;
- (double)_accessibilityScrollHeightDistance;

@end
