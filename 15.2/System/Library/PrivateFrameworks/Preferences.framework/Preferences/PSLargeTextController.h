@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController {
    PSLargeTextSliderListController *_sliderListController;
    PSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

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

@end
