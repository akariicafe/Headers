@class NSArray, PSSpecifier;

@interface DBSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)specifiers;
- (id)initUsingExtendedRange:(BOOL)a0;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewSafeAreaInsetsDidChange;

@end
