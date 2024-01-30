@class UITableViewCell, UITableView;

@interface _UITableViewSeparatorView : UIView {
    UITableViewCell *_tableCell;
    UITableView *_table;
}

- (void).cxx_destruct;
- (id)initWithTableCell:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTable:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
