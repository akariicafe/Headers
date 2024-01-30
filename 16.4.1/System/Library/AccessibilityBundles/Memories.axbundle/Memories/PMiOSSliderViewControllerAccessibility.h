@interface PMiOSSliderViewControllerAccessibility : __PMiOSSliderViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)setSelectedItem:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axDraggingSlider;
- (id)_axLastSpokenSliderDescription;
- (long long)_axMemoriesEditSliderType;
- (id)_axMemoriesMoodSlider;
- (void)_axSetMemoriesEditSliderType:(long long)a0;
- (void)_setAXDraggingSlider:(BOOL)a0;
- (void)_setAXLastSpokenSliderDescription:(id)a0;
- (void)_setAXMemoriesEditSliderType:(long long)a0;
- (void)_setAXMemoriesMoodSlider:(id)a0;
- (void)_setFontStyleForCell:(id)a0 highlighted:(BOOL)a1;

@end
