@interface PXCuratedLibraryZoomLevelControlAccessibility : __PXCuratedLibraryZoomLevelControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)setSelectedZoomLevel:(long long)a0;
- (id)accessibilityValue;
- (void)_updateSegmentedControl;
- (id)_axSiblingScrollView;
- (void)_axAdjustZoomLevel:(BOOL)a0;

@end
