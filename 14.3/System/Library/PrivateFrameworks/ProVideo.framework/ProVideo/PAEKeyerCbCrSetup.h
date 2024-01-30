@class NSNumber, NSMutableArray;

@interface PAEKeyerCbCrSetup : NSObject <NSCoding> {
    NSNumber *_tolPieX[5];
    NSNumber *_tolPieY[5];
    NSNumber *_softPieX[5];
    NSNumber *_softPieY[5];
    NSMutableArray *_splineVertex;
    struct OMSpline { struct vector<OMVertex, std::__1::allocator<OMVertex> > { struct OMVertex *x0; struct OMVertex *x1; struct __compressed_pair<OMVertex *, std::__1::allocator<OMVertex> > { struct OMVertex *x0; } x2; } x0; int x1; float x2; BOOL x3; BOOL x4; } *_keyer2DSatSpline;
    struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *_keyer2DTolPie;
    struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *_keyer2DSoftPie;
    BOOL _initialized;
}

- (id)init;
- (void)dealloc;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (void)setTolPieX:(id)a0 indice:(int)a1;
- (void)setTolPieY:(id)a0 indice:(int)a1;
- (void)setSoftPieX:(id)a0 indice:(int)a1;
- (void)setSoftPieY:(id)a0 indice:(int)a1;
- (struct Vec2f { float x0[2]; })polarToCartesian:(struct Vec2f { float x0[2]; })a0;
- (void)interpVec2f:(float)a0 left:(struct Vec2f { float x0[2]; })a1 right:(struct Vec2f { float x0[2]; })a2 interpolated:(struct Vec2f { float x0[2]; } *)a3;
- (void)toPolar:(const struct Vec2f { float x0[2]; } *)a0 polar:(struct Vec2f { float x0[2]; } *)a1;
- (void)pieToPolarForPie:(struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)a0 polar:(struct Vec2f { float x0[2]; } *)a1;
- (void)pieToPolarForPie:(struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)a0 softPie:(struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)a1 tolPolar:(struct Vec2f { float x0[2]; } *)a2 softPolar:(struct Vec2f { float x0[2]; } *)a3;
- (void)offsetPie:(struct Vec2f { float x0[2]; } *)a0 offsetDegrees:(float)a1;
- (void)interpPieWithWeight:(float)a0 currentDirectionCorrection:(float)a1 nextDirectionCorrection:(float)a2 interpolatedCenter:(struct Vec2f { float x0[2]; })a3 currentCenter:(struct Vec2f { float x0[2]; })a4 currentPolar:(const struct Vec2f { float x0[2]; } *)a5 nextCenter:(struct Vec2f { float x0[2]; })a6 nextPolar:(const struct Vec2f { float x0[2]; } *)a7 interpolationType:(int)a8 interpolatedPie:(struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)a9;
- (struct OMSpline { struct vector<OMVertex, std::__1::allocator<OMVertex> > { struct OMVertex *x0; struct OMVertex *x1; struct __compressed_pair<OMVertex *, std::__1::allocator<OMVertex> > { struct OMVertex *x0; } x2; } x0; int x1; float x2; BOOL x3; BOOL x4; } *)getKeyer2DSatSpline;
- (struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)getKeyer2DTolPie;
- (struct PAEKeyerPie { void /* function */ **x0; struct ArcCompute { float x0; float x1; float x2; float x3; } x1; struct ArcCompute { float x0; float x1; float x2; float x3; } x2; int x3; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f *x0; struct Vec2f *x1; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f *x0; } x2; } x4; } *)getKeyer2DSoftPie;

@end
