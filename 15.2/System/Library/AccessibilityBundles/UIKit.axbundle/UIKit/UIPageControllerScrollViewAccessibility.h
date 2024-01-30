@interface UIPageControllerScrollViewAccessibility : __UIPageControllerScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityScrollStatus;
- (double)_accessibilityScrollWidthDistance;
- (double)_accessibilityScrollAnimationDurationDelay;
- (void)_accessibilitySendScrollStatus;
- (double)_accessibilityScrollHeightDistance;

@end
