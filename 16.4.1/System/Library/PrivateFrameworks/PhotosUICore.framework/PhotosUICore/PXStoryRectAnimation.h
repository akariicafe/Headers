@interface PXStoryRectAnimation : PXStoryValueAnimation {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectWithoutRotation;
    double _sourceRotation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRectWithoutRotation;
    double _targetRotation;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _normalizingTransform;
}

@property (readonly, nonatomic) struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } sourceRect;
@property (readonly, nonatomic) struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } targetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerBounds;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } currentRect;

- (void)setCurrentRect:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; })a0;
- (void)updateCurrentValueWithProgress:(double)a0;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 curveInfo:(struct { long long x0; union { double x0; } x1; })a1;
- (id)initWithIdentifier:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 curveInfo:(struct { long long x0; union { double x0; } x1; })a2;
- (id)initWithIdentifier:(id)a0 sourceRect:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; })a1 targetRect:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; })a2 outerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 referenceSize:(struct CGSize { double x0; double x1; })a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 curveInfo:(struct { long long x0; union { double x0; } x1; })a6;

@end
