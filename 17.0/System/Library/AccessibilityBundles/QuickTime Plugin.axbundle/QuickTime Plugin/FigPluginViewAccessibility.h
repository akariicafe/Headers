@interface FigPluginViewAccessibility : __FigPluginViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)webPlugInStart;
- (void)setAllowPlayback:(BOOL)a0;

@end
