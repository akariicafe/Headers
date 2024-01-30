@class UIColor, NSArray;

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView {
    NSArray *_linePositions;
}

@property (nonatomic) unsigned long long numLines;
@property (nonatomic) BOOL shouldCenterLines;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long direction;
@property (nonatomic) long long lineType;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLinePositions;
- (void)drawLine:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;

@end
