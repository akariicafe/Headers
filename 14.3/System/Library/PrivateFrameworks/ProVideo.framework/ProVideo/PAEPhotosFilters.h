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

- (id)properties;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithAPIManager:(id)a0;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)variesOverTime;
- (BOOL)read:(id)a0 red:(float *)a1 green:(float *)a2 blue:(float *)a3;
- (BOOL)readCubeLine:(id)a0 intoLUTEntries:(struct vector<RGBA8Pixel, std::__1::allocator<RGBA8Pixel> > { struct RGBA8Pixel *x0; struct RGBA8Pixel *x1; struct __compressed_pair<RGBA8Pixel *, std::__1::allocator<RGBA8Pixel> > { struct RGBA8Pixel *x0; } x2; } *)a1;
- (id)readCubeData:(id)a0 error:(id *)a1;
- (id)lutFromCubeFile:(id)a0;
- (id)lutFromScubeFile:(id)a0;
- (id)lutFromCcubeFile:(id)a0;
- (id)LUTFromCache:(int)a0 atPath:(id)a1;
- (id)convertLUTTo16Bit:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })lutBitmapForFilter:(int)a0 lutDimensions:(int *)a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })generateCoolNode:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0 withInput:(struct HGRef<HGNode> { struct HGNode *x0; })a1;

@end
