@class DBSLargeTextSliderListController;

@interface DBSLargeTextController : PSListController {
    DBSLargeTextSliderListController *_sliderListController;
    DBSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

@property (nonatomic) BOOL showsExtendedRangeSwitch;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)sizeCategoryDidChange:(id)a0;
- (id)specifiers;
- (void)setUsesExtendedRange:(id)a0 forSpecifier:(id)a1;
- (id)usesExtendedRangeForSpecifier:(id)a0;

@end
