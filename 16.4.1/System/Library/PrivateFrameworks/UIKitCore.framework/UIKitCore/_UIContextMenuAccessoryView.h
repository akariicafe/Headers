@interface _UIContextMenuAccessoryView : UIView

@property (nonatomic) unsigned long long location;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } anchor;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) unsigned long long trackingAxis;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(struct { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; double x2; double x3; long long x4; } x1; struct CGPoint { double x0; double x1; } x2; unsigned long long x3; })a1;
- (struct CGPoint { double x0; double x1; })attachmentOffsetWithReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;

@end
