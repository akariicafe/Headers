@interface CAMImageWellAccessibility : __CAMImageWellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;

@end
