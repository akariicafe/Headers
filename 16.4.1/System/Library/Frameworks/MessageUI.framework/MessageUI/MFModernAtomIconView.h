@class NSArray;

@interface MFModernAtomIconView : UIView

@property (retain, nonatomic) NSArray *iconImages;
@property (nonatomic) double iconPadding;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOffset;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)preferredWidth;
- (void).cxx_destruct;

@end
