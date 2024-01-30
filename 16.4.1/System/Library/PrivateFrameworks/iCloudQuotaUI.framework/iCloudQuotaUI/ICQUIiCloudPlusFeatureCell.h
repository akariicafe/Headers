@class UIImageView, UILabel;

@interface ICQUIiCloudPlusFeatureCell : PSTableCell {
    BOOL _isLastCell;
    UIImageView *_cellImageView;
    UILabel *_titleLabel;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (void)_setupViews;
- (void).cxx_destruct;

@end
