@class WGWidgetPlatterView, UIView;

@interface WGWidgetWrapperView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) WGWidgetPlatterView *platterView;
@property (nonatomic) double overrideIntrinsicContentHeight;
@property (nonatomic) double topMarginForLayout;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithPlatterView:(id)a0;

@end
