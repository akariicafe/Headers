@class NSMutableArray, UIImageView, UILabel, UIView, UIButton;

@interface NDOAppItemViewCell : PSTableCell {
    NSMutableArray *_imageConstraints;
}

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;
@property (retain, nonatomic) UILabel *itemDetailLabel;
@property (retain, nonatomic) UIButton *itemButton;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (double)getCurrentTitleFontSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_imageAppropriateForDevice:(id)a0;
- (void)_setupAppSuportCell;
- (void)_setupWarrantyCoverageCell;
- (void)executeAction:(id)a0;
- (id)_imageFromAppStore:(id)a0;

@end
