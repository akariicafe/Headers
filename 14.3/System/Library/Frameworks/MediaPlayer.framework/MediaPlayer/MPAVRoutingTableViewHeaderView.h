@interface MPAVRoutingTableViewHeaderView : UITableViewHeaderFooterView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleInsets;

- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithReuseIdentifier:(id)a0;

@end
