@class UIImageView, STCandyBarView, UILabel, NSLayoutConstraint;

@interface STUsageCell : STTableCell

@property (readonly) UIImageView *trustWarningImageView;
@property (readonly, nonatomic) NSLayoutConstraint *usageBarWidthConstraint;
@property (readonly, nonatomic) UILabel *itemNameLabel;
@property (readonly, nonatomic) STCandyBarView *usageBarView;
@property (readonly, nonatomic) UILabel *usageLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
