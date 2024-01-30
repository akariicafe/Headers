@class NSString, SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property (readonly, nonatomic) SKUIItemCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setCellLayoutNeedsLayout;
- (void)configureForItem:(id)a0 clientContext:(id)a1 rowIndex:(long long)a2;
- (void)configureForItem:(id)a0 rowIndex:(long long)a1;

@end
