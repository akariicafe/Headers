@class NSArray, DBSLargeTextController, PSSpecifier;

@interface DBSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;
@property (nonatomic) BOOL showsResetSliderButton;
@property (weak, nonatomic) DBSLargeTextController *largeTextController;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (id)initUsingExtendedRange:(BOOL)a0;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;
- (void)resetSliderValue;
- (void)updateSliderValue;

@end
