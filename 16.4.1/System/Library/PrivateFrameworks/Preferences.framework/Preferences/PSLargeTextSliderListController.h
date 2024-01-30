@class NSArray, PSSpecifier;

@interface PSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;

- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (id)initUsingExtendedRange:(BOOL)a0;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;

@end
