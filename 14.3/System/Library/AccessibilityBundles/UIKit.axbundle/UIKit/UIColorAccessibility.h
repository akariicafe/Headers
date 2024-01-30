@class NSMutableDictionary;

@interface UIColorAccessibility : __UIColorAccessibility_super

@property (retain, nonatomic, setter=_accessibilitySetCachedColorDescriptions:) NSMutableDictionary *_accessibilityCachedColorDescriptions;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)_accessibilityColorDescriptionWithOptions:(unsigned long long)a0;
- (id)_accessibilityColorDescription;
- (id)_accessibilityColorDescriptionWithLuma;

@end
