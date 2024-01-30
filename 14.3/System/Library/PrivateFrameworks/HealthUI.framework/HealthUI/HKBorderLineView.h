@class UIColor;

@interface HKBorderLineView : UIView

@property (nonatomic) long long edges;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderLineColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;

+ (void)drawBorderLinesInContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 borderEdges:(long long)a2 borderLineWidth:(double)a3 borderLineColor:(id)a4 borderInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initFields;

@end
