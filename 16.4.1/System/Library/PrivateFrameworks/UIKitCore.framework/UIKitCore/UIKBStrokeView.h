@class NSMutableArray;

@interface UIKBStrokeView : UIView {
    NSMutableArray *_points;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addStrokePoint:(struct CGPoint { double x0; double x1; })a0 withTimestamp:(double)a1;
- (void)resetStrokePoints;

@end
