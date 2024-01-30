@class PAEKeyerLumaSetup, PAEKeyerCbCrSetup;

@interface PAEKeyerSetupUtil : NSObject {
    struct PAEKeyerOMKeyer2D { void /* function */ **x0; float x1; float x2; struct pair<Vec2f, Vec2f> { struct Vec2f { float x0[2]; } x0; struct Vec2f { float x0[2]; } x1; } x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x0[2]; } x0; struct Vec2f { float x0[2]; } x1; } x4; float x5; float x6; struct Vec2f { float x0[2]; } x7; float *x8; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x9; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; } x11; struct Mat4f { struct Vec4f { float x0[4]; } x0[4]; } x12; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x13; int x14; id x15; id x16; float x17; float x18; float x19; float x20; } *_omKeyer;
    PAEKeyerCbCrSetup *_keyerCbCrSetup;
    PAEKeyerLumaSetup *_keyerLumaSetup;
    struct OMSamples { void /* function */ **x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *> > *x6; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x7; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x8; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x9; struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> >, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > *x0; struct vector<Vec3f, std::__1::allocator<Vec3f> > *x1; struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > *, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > *x0; } x2; } x10; struct vector<OMEdge, std::__1::allocator<OMEdge> > { struct OMEdge *x0; struct OMEdge *x1; struct __compressed_pair<OMEdge *, std::__1::allocator<OMEdge> > { struct OMEdge *x0; } x2; } x11; } *_omSamples;
}

- (void)dealloc;
- (BOOL)tight;
- (struct PAEKeyerOMKeyer2D { void /* function */ **x0; float x1; float x2; struct pair<Vec2f, Vec2f> { struct Vec2f { float x0[2]; } x0; struct Vec2f { float x0[2]; } x1; } x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x0[2]; } x0; struct Vec2f { float x0[2]; } x1; } x4; float x5; float x6; struct Vec2f { float x0[2]; } x7; float *x8; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x9; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; } x11; struct Mat4f { struct Vec4f { float x0[4]; } x0[4]; } x12; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x13; int x14; id x15; id x16; float x17; float x18; float x19; float x20; } *)omKeyer;
- (BOOL)autoScale;
- (id)initWithOMSamples:(struct OMSamples { void /* function */ **x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *> > *x6; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x7; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x8; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } x9; struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> >, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > *x0; struct vector<Vec3f, std::__1::allocator<Vec3f> > *x1; struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > *, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > *x0; } x2; } x10; struct vector<OMEdge, std::__1::allocator<OMEdge> > { struct OMEdge *x0; struct OMEdge *x1; struct __compressed_pair<OMEdge *, std::__1::allocator<OMEdge> > { struct OMEdge *x0; } x2; } x11; } *)a0 colorPrimaries:(int)a1 atTime:(union { double x0; struct *x1; })a2;
- (double)shadowsGain;
- (double)highlightsGain;
- (double)spreadGain;
- (void)syncWithDB:(union { double x0; struct *x1; })a0 setAsDefault:(BOOL)a1;
- (void)syncChromaWithDB:(union { double x0; struct *x1; })a0;
- (void)syncLumaWithDB:(union { double x0; struct *x1; })a0;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0 forParam:(int)a1 withAPI:(id)a2;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0;
- (double)autoAdjustSoftGap;
- (double)simpleKeyAmount;
- (double)autoKeySoftness;
- (BOOL)addTolerance;
- (void)setAddTolerance:(BOOL)a0;
- (BOOL)defineEdge;
- (void)setDefineEdge:(BOOL)a0;
- (BOOL)keyerActiveAt:(union { double x0; struct *x1; })a0;

@end
