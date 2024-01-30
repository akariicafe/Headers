@class UIView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView

@property (retain, nonatomic) UIView *view;
@property (nonatomic) double inset;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 topInset:(double)a1;

@end
