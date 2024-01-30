@class NSString;

@interface ShotflowNetwork : NSObject {
    struct { void *plan; int network_index; } _espressoNetwork;
    void *_espressoPlan;
    void *_espressoContext;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _logitsPosOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _logitsNegOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _offsetsOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _rollOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _yawOutputs;
    unsigned long long _currentNetworkWidth;
    unsigned long long _currentNetworkHeight;
    BOOL _releaseEspressoContext;
    BOOL _releaseEspressoPlan;
    BOOL isAnchorSquare[10];
    float _defaultBoxSizes[6][10][2];
}

@property (class, readonly) unsigned long long numberMaxoutLayers;
@property (class, readonly) const void *ratios;
@property (class, readonly) const void *cellStartsX;
@property (class, readonly) const void *cellStartsY;
@property (class, readonly) unsigned long long mumberBinsNegativeMaxout;
@property (class, readonly) unsigned long long mumberPosClasses;
@property (class, readonly) const void *strides;
@property (class, readonly) const void *defaultBoxesSides;
@property (class, readonly) float inputScale;
@property (class, readonly) struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x0; float x1; float x2; } x0; } inputBiasRGB;
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
@property (class, readonly) const void *importantClasses;

@property (readonly, nonatomic) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;

+ (BOOL)hasPose;
+ (id)processingDeviceNetworkWithModelPath:(id)a0 threshold:(float)a1 preferredDeviceID:(int)a2 engineID:(int)a3 storageType:(int)a4;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1 threshold:(float)a2;

- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (void)initializeBuffers;
- (void)dealloc;
- (id).cxx_construct;
- (void)runNetwork:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (id)initWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1 threshold:(float)a2;
- (void)initializeEspressoResourcesWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3;

@end
