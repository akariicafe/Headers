@class UILabel;

@interface PUITrackerCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
