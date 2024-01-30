@class PKMutableStroke, PKStroke;

@interface TSKPKMutableStroke : TSKPKStroke

@property (retain, nonatomic) PKMutableStroke *yukonMutableStroke;
@property (retain, nonatomic) PKStroke *peaceMutableStroke;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationAtIndex:(unsigned long long)a0;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)initWithPKStroke:(id)a0 pencilAnnotationDrawingScale:(double)a1;
- (id)internalPencilKitStroke;
- (void)transformWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
