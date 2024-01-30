@interface PUCollectionViewAccessibility : __PUCollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_scrollViewAnimationEnded:(id)a0 finished:(BOOL)a1;
- (BOOL)_accessibilityShouldSpeakScrollStatusOnEntry;

@end
