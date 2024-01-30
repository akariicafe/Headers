@class NSString, NSTextLayoutFragment;

@interface _UITextLayoutFragmentView : UIView <_UIMutableTextLayoutFragmentView>

@property (nonatomic) struct CGPoint { double x; double y; } containerOrigin;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clipRect;
@property (readonly, nonatomic) NSTextLayoutFragment *layoutFragment;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutFragment:(id)a0 containerOrigin:(struct CGPoint { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)performChanges:(id /* block */)a0;
- (void)_updateGeometry;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)enumerateTextAttachmentViewsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
