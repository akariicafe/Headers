@class UIStackView, UILabel, NSArray, UIFont, UIColor, NSString, NSMutableArray, NSLayoutConstraint, PSCapacityBarView, PSCapacityBarLegendView;

@interface PSCapacityBarCell : PSTableCell {
    double _tableWidth;
    NSMutableArray *_normalConstraints;
    NSMutableArray *_largeConstraints;
    NSMutableArray *_legendConstraints;
    NSMutableArray *_commonConstraints;
    NSLayoutConstraint *_barHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UILabel *_loadingLabel;
    PSCapacityBarView *_barView;
    UIStackView *_legendView;
    NSArray *_legends;
    PSCapacityBarLegendView *_otherLegend;
    UIFont *_legendFont;
    UIFont *_bigFont;
    UIColor *_legendTextColor;
    BOOL _hideLegend;
    BOOL _showOtherLegend;
    BOOL _forceLoading;
    BOOL _sizesAreMem;
    NSString *_sizeFormat;
}

+ (id)specifierWithTitle:(id)a0 useStandardFontSizeForSizeLabel:(BOOL)a1;
+ (id)specifierWithTitle:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)createLargeConstraints;
- (void)createNormalConstraints;
- (void)createCommonConstraints;
- (void)createLegends:(id)a0;
- (void)addVerticalLegends;
- (void)addHorizontalLegends;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)usageString:(id)a0;
- (void)initializeViews;

@end
