@interface TabSnapshotImageView : UIImageView

@property (nonatomic) struct CGPoint { double x; double y; } imagePosition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cropInsets;
@property (nonatomic) BOOL keepImageAligned;
@property (readonly, nonatomic) double imageScaleRatio;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectWithSnapshotSize:(struct CGSize { double x0; double x1; })a0 imageViewSize:(struct CGSize { double x0; double x1; })a1 imagePosition:(struct CGPoint { double x0; double x1; })a2 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
+ (double)imageScaleRatioWithOnScreenImageSize:(struct CGSize { double x0; double x1; })a0 imageViewSize:(struct CGSize { double x0; double x1; })a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (struct CGSize { double x0; double x1; })imageSizeOnScreen:(id)a0;

- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)_setUpImageView;
- (void)updateImageAlignment;

@end
