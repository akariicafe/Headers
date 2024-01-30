@interface _UIDragDestinationIndicatorView : UIView

@property (nonatomic) BOOL isSourceList;
@property (readonly, nonatomic) double scaleFactor;

- (void)positionOnCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 above:(BOOL)a1;
- (id)initWithSourceListStyle:(BOOL)a0;
- (void)positionVerticallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionHorizontallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
