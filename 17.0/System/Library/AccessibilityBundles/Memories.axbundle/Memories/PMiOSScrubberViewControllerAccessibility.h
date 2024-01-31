@interface PMiOSScrubberViewControllerAccessibility : __PMiOSScrubberViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setAXLastScrolledTimeInterval:(double)a0;
- (double)_axLastScrolledTimeInterval;

@end
