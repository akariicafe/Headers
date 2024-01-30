@interface PMiOSScrubberViewControllerAccessibility : __PMiOSScrubberViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)_axLastScrolledTimeInterval;
- (void)_setAXLastScrolledTimeInterval:(double)a0;

@end
