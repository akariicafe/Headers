@class PVImageBuffer;

@interface PVComputeGuidedFilter : NSObject {
    PVImageBuffer *_guide;
}

@property (readonly, nonatomic) int radius;
@property (readonly, nonatomic) float epsilon;

- (void).cxx_destruct;
- (BOOL)runCPUPathOnInput:(struct HGBitmap { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; int x3; struct HGRect { int x0; int x1; int x2; int x3; } x4; struct HGRect { int x0; int x1; int x2; int x3; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct HGEdgePolicy { int x0; float x1[4]; } x11; struct HGObject *x12; } *)a0 guide:(struct HGBitmap { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; int x3; struct HGRect { int x0; int x1; int x2; int x3; } x4; struct HGRect { int x0; int x1; int x2; int x3; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct HGEdgePolicy { int x0; float x1[4]; } x11; struct HGObject *x12; } *)a1 output:(struct HGBitmap { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; int x3; struct HGRect { int x0; int x1; int x2; int x3; } x4; struct HGRect { int x0; int x1; int x2; int x3; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct HGEdgePolicy { int x0; float x1[4]; } x11; struct HGObject *x12; } *)a2 radius:(int)a3 epsilon:(float)a4;
- (void)processStage1Float32Input:(float *)a0 inputRowBytes:(unsigned long long)a1 guide:(float *)a2 guideRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage1UInt8Input:(char *)a0 inputRowBytes:(unsigned long long)a1 guide:(char *)a2 guideRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage5Float32Guide:(float *)a0 guideRowBytes:(unsigned long long)a1 stats:(float *)a2 statsRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage5UInt6Guide:(char *)a0 guideRowBytes:(unsigned long long)a1 stats:(float *)a2 statsRowBytes:(unsigned long long)a3 output:(char *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (id)initWithGuide:(id)a0 radius:(int)a1 epsilon:(float)a2;
- (BOOL)applyFilterToInput:(id)a0 output:(id)a1;

@end
