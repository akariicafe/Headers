@class UIImageView, NSIndexPath, UIImage;

@interface PUGridMagnifiedView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } magnifiedImageSize;
@property (retain, nonatomic) NSIndexPath *itemIndexPath;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } magnifiedDragEdgeInsets;

- (void)setShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setShadowOpacity:(double)a0;
- (void)setShadowRadius:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageWindFrame;
- (void)hideAnimate:(BOOL)a0;
- (void)moveToLocation:(struct CGPoint { double x0; double x1; })a0 animate:(BOOL)a1;
- (void)setImageAnimate:(BOOL)a0;
- (void)magnifyFromImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toLocation:(struct CGPoint { double x0; double x1; })a1 animate:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })magnifiedFrameForParentLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameForPhotoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })photoFrameForViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinFrameToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
