@class NSString, NSNumber;

@interface _UIContextMenuActionViewAccessibility : ___UIContextMenuActionViewAccessibility_super

@property (retain, nonatomic, setter=_accessibilitySetStoredLabelFromMenuElement:) NSString *_accessibilityStoredLabelFromMenuElement;
@property (retain, nonatomic, setter=_accessibilitySetStoredHintFromMenuElement:) NSString *_accessibilityStoredHintFromMenuElement;
@property (retain, nonatomic, setter=_accessibilitySetStoredTraitsFromMenuElement:) NSNumber *_accessibilityStoredTraitsFromMenuElement;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;

@end
