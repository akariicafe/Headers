@class TPKTipContentTableViewCell;

@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell

@property (nonatomic) int state;
@property (retain, nonatomic) TPKTipContentTableViewCell *tipkitCell;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (double)preferredHeightWithTable:(id)a0;

@end
