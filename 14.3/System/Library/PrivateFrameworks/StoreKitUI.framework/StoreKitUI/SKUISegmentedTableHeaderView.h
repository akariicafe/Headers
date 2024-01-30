@class _UIBackdropView, UIView;

@interface SKUISegmentedTableHeaderView : UIView {
    UIView *_borderView;
}

@property (nonatomic) BOOL hidesBorderView;
@property (retain, nonatomic) UIView *segmentedControl;
@property (readonly, nonatomic) _UIBackdropView *backdropView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_borderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
