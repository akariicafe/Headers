@interface PXCuratedLibraryZoomLevelControlAccessibility : __PXCuratedLibraryZoomLevelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateSegmentedControl;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)setSelectedZoomLevel:(long long)a0;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axSiblingScrollView;
- (void)_axAdjustZoomLevel:(BOOL)a0;

@end
