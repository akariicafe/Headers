@class EQKitBox;

@interface EQKitPaddedBox : EQKitBox {
    double mHeight;
    double mDepth;
    double mWidth;
}

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double lspace;
@property (readonly, nonatomic) double voffset;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (double)opticalAlignWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithBox:(id)a0 height:(double)a1 width:(double)a2 depth:(double)a3 lspace:(double)a4 voffset:(double)a5;

@end
