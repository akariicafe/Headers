@class TPKTipContentTableViewCell;

@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell

@property (nonatomic) int state;
@property (retain, nonatomic) TPKTipContentTableViewCell *tipkitCell;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)preferredHeightWithTable:(id)a0;

@end
