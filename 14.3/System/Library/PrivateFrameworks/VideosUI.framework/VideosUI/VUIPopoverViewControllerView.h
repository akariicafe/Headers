@class UIButton, UITableView;

@interface VUIPopoverViewControllerView : UIView

@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UIButton *cancelButton;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
