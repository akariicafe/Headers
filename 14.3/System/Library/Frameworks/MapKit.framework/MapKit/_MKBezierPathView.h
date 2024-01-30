@class UIColor;

@interface _MKBezierPathView : UIView {
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (Class)layerClass;
+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;

- (void)setFillColor:(id)a0;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPath:(struct CGPath { } *)a0 duration:(double)a1;
- (void)setPath:(struct CGPath { } *)a0;
- (void)setStrokeColor:(id)a0 width:(double)a1;
- (id)initWithBalloonRadius:(double)a0 tailLength:(double)a1;
- (id)initWithOvalInSize:(struct CGSize { double x0; double x1; })a0;

@end
