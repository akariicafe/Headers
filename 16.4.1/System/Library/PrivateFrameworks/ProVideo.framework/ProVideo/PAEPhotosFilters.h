@class NSURL, NSMutableDictionary, NSData;

@interface PAEPhotosFilters : PAEFilterDefaultBase {
    struct PCMutex { void /* function */ **_vptr$PCMutex; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _Mutex; } cacheMutex;
    NSMutableDictionary *LUTcache;
    NSURL *LUTCubeURL;
    NSURL *LUTScubeURL;
    NSURL *LUTCcubeURL;
    int whichFilter;
    NSData *cool16BitLUT;
}

- (id).cxx_construct;
- (id)properties;
- (void)dealloc;
- (void).cxx_destruct;
- (id)LUTFromCache:(int)a0 atPath:(id)a1;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (id)initWithAPIManager:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })lutBitmapForFilter:(int)a0 lutDimensions:(int *)a1;
- (id)lutFromCcubeFile:(id)a0;
- (id)lutFromCubeFile:(id)a0;
- (id)lutFromScubeFile:(id)a0;
- (BOOL)read:(id)a0 red:(float *)a1 green:(float *)a2 blue:(float *)a3;
- (id)readCubeData:(id)a0 error:(id *)a1;
- (BOOL)readCubeLine:(id)a0 intoLUTEntries:(void *)a1;
- (BOOL)variesOverTime;

@end
