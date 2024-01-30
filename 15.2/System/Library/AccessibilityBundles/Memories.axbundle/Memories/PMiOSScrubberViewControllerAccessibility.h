@interface PMiOSScrubberViewControllerAccessibility : __PMiOSScrubberViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)_axLastScrolledTimeInterval;
- (void)_setAXLastScrolledTimeInterval:(double)a0;

@end
