@interface PMiOSSliderViewControllerAccessibility : __PMiOSSliderViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setSelectedItem:(long long)a0;
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
