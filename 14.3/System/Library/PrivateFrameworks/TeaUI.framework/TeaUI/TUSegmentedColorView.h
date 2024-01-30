@interface TUSegmentedColorView : UIView

@property (nonatomic, retain) void /* unknown type, empty encoding */ startColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ endColor;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfSegments;
@property (nonatomic) void /* unknown type, empty encoding */ direction;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
