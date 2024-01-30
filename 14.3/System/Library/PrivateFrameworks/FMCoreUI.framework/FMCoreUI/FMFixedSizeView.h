@interface FMFixedSizeView : UIView

@property (nonatomic) struct CGSize { double width; double height; } fixedIntrinsicSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;

@end
