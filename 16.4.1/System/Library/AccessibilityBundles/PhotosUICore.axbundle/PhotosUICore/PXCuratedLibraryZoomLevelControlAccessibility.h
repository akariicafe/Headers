@interface PXCuratedLibraryZoomLevelControlAccessibility : __PXCuratedLibraryZoomLevelControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)_updateSegmentedControl;
- (void)setSelectedZoomLevel:(long long)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_axAdjustZoomLevel:(BOOL)a0;
- (id)_axSiblingScrollView;

@end
