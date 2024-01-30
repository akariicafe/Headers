@class UIImageView;

@interface _HKDocumentImageView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (readonly, nonatomic) UIImageView *imageView;

- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
