@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
