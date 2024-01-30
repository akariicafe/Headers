@interface PMiOSSliderViewControllerAccessibility : __PMiOSSliderViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setSelectedItem:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setFontStyleForCell:(id)a0 highlighted:(BOOL)a1;
- (void)_axSetMemoriesEditSliderType:(long long)a0;
- (void)_setAXMemoriesEditSliderType:(long long)a0;
- (id)_axMemoriesMoodSlider;
- (void)_setAXDraggingSlider:(BOOL)a0;
- (long long)_axMemoriesEditSliderType;
- (void)_setAXMemoriesMoodSlider:(id)a0;
- (BOOL)_axDraggingSlider;
- (id)_axLastSpokenSliderDescription;
- (void)_setAXLastSpokenSliderDescription:(id)a0;

@end
