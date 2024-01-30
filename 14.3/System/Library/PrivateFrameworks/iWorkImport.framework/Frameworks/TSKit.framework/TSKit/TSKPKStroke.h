@class NSArray, PKInk, PKStroke;

@interface TSKPKStroke : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (retain, nonatomic) PKStroke *internalPencilKitStroke;
@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) PKStroke *pencilKitStroke;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } incorrectUnscaledFastFrame;
@property (readonly, nonatomic) double pencilAnnotationDrawingScale;
@property (readonly, nonatomic) unsigned long long pointsCount;

+ (id)p_copyOfPKStroke:(id)a0;
+ (struct CGPoint { double x0; double x1; })p_locationAtIndex:(unsigned long long)a0 ofStroke:(id)a1;
+ (id)substrokeOfStroke:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (unsigned long long)p_pointsCountOfStroke:(id)a0;
+ (id)strokesForPKStrokes:(id)a0 withPencilAnnotationDrawingScale:(double)a1;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (double)timestampAtIndex:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)substrokeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokePointsFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledStrokePointsFrame;
- (id)initWithPKStroke:(id)a0 pencilAnnotationDrawingScale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_incorrectPencilKitFastFrame;
- (double)timestampForFirstPointInStroke;
- (double)timestampForLastPointInStroke;
- (struct CGPoint { double x0; double x1; })unscaledLocationAtIndex:(unsigned long long)a0;
- (id)subStrokeFromStartIndex:(unsigned long long)a0 toEndIndex:(unsigned long long)a1 adjustingStart:(BOOL)a2 andAdjustingEnd:(BOOL)a3 toEdgesOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)enumerateUnscaledPointsWithDistanceStep:(double)a0 usingBlock:(id /* block */)a1;
- (id)strokeByTransformingStrokeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)isUnderlineStrokeWithVerticalTextLayout:(BOOL)a0;

@end
