@class NSString, NSArray;

@interface ShotflowNetwork : NSObject {
    struct { void *plan; int network_index; } _espressoNetwork;
    void *_espressoPlan;
    void *_espressoContext;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__begin_; struct shared_ptr<espresso_buffer_t> *__end_; struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__value_; } __end_cap_; } _logitsPosOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__begin_; struct shared_ptr<espresso_buffer_t> *__end_; struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__value_; } __end_cap_; } _logitsNegOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__begin_; struct shared_ptr<espresso_buffer_t> *__end_; struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__value_; } __end_cap_; } _offsetsOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__begin_; struct shared_ptr<espresso_buffer_t> *__end_; struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__value_; } __end_cap_; } _rollOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__begin_; struct shared_ptr<espresso_buffer_t> *__end_; struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { struct shared_ptr<espresso_buffer_t> *__value_; } __end_cap_; } _yawOutputs;
    unsigned long long _currentNetworkWidth;
    unsigned long long _currentNetworkHeight;
    BOOL _releaseEspressoContext;
    BOOL _releaseEspressoPlan;
    BOOL isAnchorSquare[10];
    NSArray *_filterThreshold;
    float _defaultBoxSizes[6][10][2];
}

@property (class, readonly) unsigned long long numberMaxoutLayers;
@property (class, readonly) const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *ratios;
@property (class, readonly) const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *cellStartsX;
@property (class, readonly) const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *cellStartsY;
@property (class, readonly) unsigned long long mumberBinsNegativeMaxout;
@property (class, readonly) unsigned long long mumberPosClasses;
@property (class, readonly) const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *strides;
@property (class, readonly) const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *defaultBoxesSides;
@property (class, readonly) float inputScale;
@property (class, readonly) struct tuple<float, float, float> { struct __tuple_impl<std::__1::__tuple_indices<0, 1, 2>, float, float, float> { float x0; float x1; float x2; } x0; } inputBiasRGB;
@property (class, readonly) BOOL inputBGR;
@property (class, readonly) unsigned long long numberBinsRoll;
@property (class, readonly) unsigned long long numberBinsYaw;
@property (class, readonly) NSString *modelName;
@property (class, readonly) NSString *inputLayerName;
@property (class, readonly) struct CGSize { double x0; double x1; } inputImageSize;
@property (class, readonly) float inputImageMinDimension;
@property (class, readonly) float inputImageMaxDimension;
@property (class, readonly) float inputImageAspectRatio;
@property (class, readonly) BOOL poseSquare;
@property (class, readonly) float nonSquareRollDefault;
@property (class, readonly) float nonSquareYawDefault;
@property (class, readonly) const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } *importantClasses;

@property (readonly, nonatomic) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;

+ (BOOL)hasPose;
+ (id)processingDeviceNetworkWithModelPath:(id)a0 threshold:(float)a1 preferredDeviceID:(int)a2 engineID:(int)a3 storageType:(int)a4;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1 threshold:(float)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)runNetwork:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id).cxx_construct;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1 threshold:(float)a2;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeEspressoResourcesWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3;

@end
