@interface PXCuratedLibraryZoomLevelControlAccessibility : __PXCuratedLibraryZoomLevelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)_updateSegmentedControl;
- (void)setSelectedZoomLevel:(long long)a0;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_axAdjustZoomLevel:(BOOL)a0;
- (id)_axSiblingScrollView;

@end
