@class NSMutableArray;

@interface AKRoundedPath : NSObject

@property (retain, nonatomic) NSMutableArray *points;
@property (retain) struct CGPath { } *CGPath;

+ (id)pathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)pathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)pathWithEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addContinuousCornerToPath:(struct CGPath { } *)a0 trueCorner:(struct CGPoint { double x0; double x1; })a1 cornerRadius:(struct CGSize { double x0; double x1; })a2 corners:(unsigned long long)a3 portion:(unsigned long long)a4 clockwise:(BOOL)a5 fullRadius:(BOOL)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRect;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1;
- (void)addLineToPointX:(double)a0 y:(double)a1;
- (void)closeSubpath;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(id)a1 smoothPillShapes:(BOOL)a2;

@end
