@class NSString;

@interface CalloutViewAccessibility : __CalloutViewAccessibility_super

@property (readonly, nonatomic) NSString *axCalloutText;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)setAlpha:(double)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axInternalIsActuallyVisible;
- (BOOL)_axIsActuallyVisible;
- (void)_axSetInternalIsActuallyVisible:(BOOL)a0;
- (void)_axSetIsActuallyVisible:(BOOL)a0;
- (void)_axSetIsNotActuallyVisible;
- (void)_axUpdateIsVisible;
- (void)axDidUpdateFromPreviousCalloutText:(id)a0;

@end
