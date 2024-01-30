@interface MPAVRoutingTableViewHeaderView : UITableViewHeaderFooterView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleInsets;

- (void)_updateFont;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
