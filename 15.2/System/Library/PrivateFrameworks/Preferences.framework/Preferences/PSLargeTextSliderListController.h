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

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;
- (id)initUsingExtendedRange:(BOOL)a0;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (void).cxx_destruct;

@end
