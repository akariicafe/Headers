@class UILabel;

@interface SRDetailedTableCell : UITableViewCell

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;

@end
