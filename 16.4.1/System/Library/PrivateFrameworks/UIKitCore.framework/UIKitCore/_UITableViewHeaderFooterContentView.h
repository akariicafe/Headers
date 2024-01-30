@interface _UITableViewHeaderFooterContentView : UIView

- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_headerFooterView;
- (void)setBackgroundColor:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;

@end
