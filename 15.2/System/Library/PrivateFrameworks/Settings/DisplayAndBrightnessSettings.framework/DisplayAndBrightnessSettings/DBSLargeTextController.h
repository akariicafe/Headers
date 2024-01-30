@class DBSLargeTextSliderListController;

@interface DBSLargeTextController : PSListController {
    DBSLargeTextSliderListController *_sliderListController;
    DBSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

@property (nonatomic) BOOL showsResetSliderButton;
@property (nonatomic) BOOL savesCategoryNameOnlyOnSliderEvent;
@property (nonatomic) BOOL showsExtendedRangeSwitch;

- (id)specifiers;
- (void)viewDidLayoutSubviews;
- (void)sizeCategoryDidChange:(id)a0;
- (void)loadView;
- (void)setUsesExtendedRange:(id)a0 forSpecifier:(id)a1;
- (id)usesExtendedRangeForSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)savePreferredContentSizeCategoryName:(id)a0;
- (id)readPreferredContentSizeCategoryName;
- (void)resetContentSizeCategoryName;
- (BOOL)readUsesExtendedRange;
- (void)updateSlidersForNewUsesExtendedRangeValue:(BOOL)a0;
- (void)saveUsesExtendedRange:(BOOL)a0;
- (void)updateSlider;

@end
