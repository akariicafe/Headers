@interface CIAutoEnhanceFace : NSObject

@property (readonly) int size;
@property (readonly) int centerX;
@property (readonly) int centerY;
@property (readonly) double I;
@property (readonly) double Q;

- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRect;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andImage:(id)a1 usingContext:(id)a2;

@end
