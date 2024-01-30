@class UIView;

@interface HULayoutContainerView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy, nonatomic) id /* block */ layoutBlock;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContentView:(id)a0 layoutBlock:(id /* block */)a1;

@end
