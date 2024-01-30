@class UITableView;

@interface STSCategoryView : UIView

@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) struct CGPoint { double x; double y; } footerOffset;

- (id)init;
- (void).cxx_destruct;

@end
