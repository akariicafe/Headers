@class UITableViewController, NSLayoutConstraint;

@interface STTableWelcomeController : OBTableWelcomeController

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setTableView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_contentSizeDidChangeFrom:(struct CGSize { double x0; double x1; })a0 to:(struct CGSize { double x0; double x1; })a1;

@end
