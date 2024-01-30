@class UIFont;

@interface HUGridStatusBannerCellLayoutOptions : HUGridBannerCellLayoutOptions

@property (nonatomic) double titleInterLineSpacing;
@property (nonatomic) double trailingInset;
@property (nonatomic) double horizontalItemSpacing;
@property (nonatomic) double leadingInset;
@property (nonatomic) double iconTopInset;
@property (nonatomic) double iconTrailingInset;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconWidth;
@property (nonatomic) double titleTopInset;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long maxNumberOfTitleLines;
@property (nonatomic) unsigned long long maxNumberOfDescriptionLines;
@property (nonatomic) double verticalLabelSpacing;
@property (nonatomic) double verticalSpacingForLineView;
@property (nonatomic) double verticalSpacingForLipElements;
@property (retain, nonatomic) UIFont *footerViewLabelFont;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)statusBannerCellHeightForWidth:(double)a0 title:(id)a1 description:(id)a2 forContentSizeCategory:(id)a3;

@end
