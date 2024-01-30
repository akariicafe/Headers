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

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (double)opticalAlignWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; struct Entry *x1; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; } x2; } x0; unsigned int x1; } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithBox:(id)a0 height:(double)a1 width:(double)a2 depth:(double)a3 lspace:(double)a4 voffset:(double)a5;

@end
