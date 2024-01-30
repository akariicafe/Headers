@class UIImageView, UILabel, UIButton;

@interface STAppStoreIconCell : STTableCell

@property (readonly, nonatomic) UIImageView *appIconView;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UIButton *viewButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (void)setValue:(id)a0;
- (void)viewAppInStore:(id)a0;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
