@class NSLayoutConstraint;

@interface DSTableView : UITableView

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)constrainTableView;

@end
