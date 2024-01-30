@class NSTextLayoutFragment;

@interface _UITextLayoutFragmentView : UIView

@property (readonly, nonatomic) NSTextLayoutFragment *layoutFragment;
@property (nonatomic) struct CGPoint { double x; double y; } containerOrigin;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clipRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipFrame;

- (void)layoutSubviews;
- (void)_updateGeometry;
- (id)initWithLayoutFragment:(id)a0 containerOrigin:(struct CGPoint { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (void)enumerateTextAttachmentViewsUsingBlock:(id /* block */)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
