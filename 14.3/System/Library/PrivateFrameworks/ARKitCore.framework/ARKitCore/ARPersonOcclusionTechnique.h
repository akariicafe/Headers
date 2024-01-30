@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARPersonOcclusionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_bgraPixelBufferPool;
    struct __CVPixelBufferPool { } *_depthPixelBufferPool;
    struct shared_ptr<arkit::RobustExpFilter<float> > { struct RobustExpFilter<float> *__ptr_; struct __shared_weak_count *__cntrl_; } _varExpFilter;
    long long _lastDeviceOrientation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } _localPixelDepthDict;
    unsigned long long _minFilterIntermediateBufferSize;
    char *_minFilterIntermediatePooledBuffer;
}

+ (float)_confidenceForDepthData:(SEL)a0 location:(id)a1;

- (BOOL)isBusy;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)_fullDescription;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (int)_minFilterDepthMap:(struct __CVBuffer { } *)a0 kernelSize:(unsigned long long)a1 pResultBuffer:(struct __CVBuffer **)a2;
- (int)postProcessSegmentation:(struct __CVBuffer { } *)a0 depthData:(id)a1 depthDataSource:(long long)a2 detectionData:(id)a3 pResultingDepthBuffer:(struct __CVBuffer **)a4;

@end
