@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_regions;
    float *_diff;
    float *_ptrFirst;
    float *_ptrLast;
    struct Scaler { struct __CVPixelBufferPool *pool_; int width_; int height_; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop_rect_; struct __IOSurfaceAccelerator *hw_scaler_; struct OpaqueVTPixelTransferSession *sw_scaler_; } _scaler;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> > { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> > { struct __CVBuffer **__value_; } __end_cap_; } _frameArray;
    int _frameWidth;
    int _frameHeight;
    int _width;
    int _height;
    int _stride;
    int _blockSize;
    int _widthBlockNum;
    int _heightBlockNum;
}

@property (readonly) float actionScore;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)calculateFrameDifference:(struct __CVBuffer { } *)a0;
- (int)computeRegionsofInterest;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (id).cxx_construct;
- (id)regionsOfInterest;

@end
