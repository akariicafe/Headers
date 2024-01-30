@interface QLVideoScrubberViewAccessibility : __QLVideoScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isUserInteractingWithScrubber;
- (BOOL)_axIsScrubbering;
- (void)_axSetIsScrubbering:(BOOL)a0;

@end
