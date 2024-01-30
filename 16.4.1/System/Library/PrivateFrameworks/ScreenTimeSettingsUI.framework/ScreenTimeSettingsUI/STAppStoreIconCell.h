@class UIImageView, UILabel;

@interface STAppStoreIconCell : STTableCell

@property (readonly, nonatomic) UIImageView *appIconView;
@property (readonly, nonatomic) UILabel *nameLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
