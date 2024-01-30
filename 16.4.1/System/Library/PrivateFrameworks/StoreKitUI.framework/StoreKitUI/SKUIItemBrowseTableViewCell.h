@class SKUIItemBrowseCellLayout;

@interface SKUIItemBrowseTableViewCell : SKUIItemTableViewCell

@property (readonly, nonatomic) SKUIItemBrowseCellLayout *layout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)configureForItem:(id)a0 clientContext:(id)a1 rowIndex:(long long)a2;

@end
