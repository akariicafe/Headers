@interface UIPageControllerScrollViewAccessibility : __UIPageControllerScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityScrollStatus;
- (double)_accessibilityScrollWidthDistance;
- (double)_accessibilityScrollAnimationDurationDelay;
- (double)_accessibilityScrollHeightDistance;
- (void)_accessibilitySendScrollStatus;

@end
