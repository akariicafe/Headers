@class NSString;

@interface LabelViewAccessibility : __LabelViewAccessibility_super

@property (readonly, nonatomic) NSString *_accessibilityLastSavedMeasurementString;
@property (readonly, nonatomic) NSString *_accessibilityCurrentMeasurementString;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityLabelElementsWithAccessibilityContainer:(id)a0;
- (id)_axLabelElementForMeasureID:(id)a0 accessibilityContainer:(id)a1;

@end
