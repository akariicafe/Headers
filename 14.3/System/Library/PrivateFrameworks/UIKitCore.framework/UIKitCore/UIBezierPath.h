@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding> {
    struct CGPath { } *_path;
    double *_lineDashPattern;
    unsigned long long _lineDashPatternCount;
    double _lineDashPhase;
    struct CGPath { } *_immutablePath;
    BOOL _immutablePathIsValid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) const struct CGPath { } *CGPath;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCapStyle;
@property (nonatomic) int lineJoinStyle;
@property (nonatomic) double miterLimit;
@property (nonatomic) double flatness;
@property (nonatomic) BOOL usesEvenOddFillRule;

+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadius:(double)a2 segments:(int)a3 legacyCorners:(BOOL)a4;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadius:(struct CGSize { double x0; double x1; })a2 segments:(int)a3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadii:(id)a2 segments:(int)a3 smoothPillShapes:(BOOL)a4;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTopCornerRadius:(double)a1 withBottomCornerRadius:(double)a2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 withCornerRadius:(double)a2;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadius:(double)a2 segments:(int)a3;
+ (id)bezierPathWithArcCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 startAngle:(double)a2 endAngle:(double)a3 clockwise:(BOOL)a4;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byRoundingCorners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)_bezierPathWithPillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedEdges:(unsigned long long)a1;
+ (id)bezierPath;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byRoundingCorners:(unsigned long long)a1 cornerRadius:(double)a2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedEdges:(unsigned long long)a1;
+ (id)bezierPathWithCGPath:(struct CGPath { } *)a0;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 withCornerRadii:(id)a2;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)_bezierPathWithArcRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)fill;
- (void)clip;
- (void)stroke;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { double x0; double x1; })a0 radius:(struct CGSize { double x0; double x1; })a1 corner:(unsigned long long)a2 clockwise:(BOOL)a3 leadInIsContinuous:(BOOL)a4 leadOutIsContinuous:(BOOL)a5;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 startAngle:(double)a2 endAngle:(double)a3 clockwise:(BOOL)a4;
- (void)addClip;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { double x0; double x1; })a0 radius:(struct CGSize { double x0; double x1; })a1 corner:(unsigned long long)a2 clockwise:(BOOL)a3;
- (struct CGPath { } *)_pathRef;
- (void)closePath;
- (void)setLineDash:(const double *)a0 count:(long long)a1 phase:(double)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (struct CGPath { } *)_createMutablePathByDecodingData:(id)a0;
- (id)_initWithCGMutablePath:(struct CGPath { } *)a0;
- (void)addQuadCurveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)addCurveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)removeAllPoints;
- (id)bezierPathByReversingPath;
- (void)getLineDash:(double *)a0 count:(long long *)a1 phase:(double *)a2;
- (void)fillWithBlendMode:(int)a0 alpha:(double)a1;
- (void)strokeWithBlendMode:(int)a0 alpha:(double)a1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)appendPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addArcWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 startAngle:(double)a2 endAngle:(double)a3 clockwise:(BOOL)a4;
- (void)lineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appendBezierPath:(id)a0;
- (struct CGPath { } *)_mutablePath;
- (void)addLineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
