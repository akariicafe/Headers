@class NSMutableArray, AVAsset, AVAssetTrack, AVAssetWriterInput, NSObject, AVAssetWriterInputMetadataAdaptor, AVAssetWriter;
@protocol OS_dispatch_semaphore;

@interface VCPMovieAssetWriter : NSObject {
    AVAsset *_asset;
    AVAssetTrack *_track;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    AVAssetWriterInputMetadataAdaptor *_metadataAdaptor;
    NSMutableArray *_sampleQueue;
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } _status;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
}

+ (id)assetWriterWithURL:(id)a0 andTrack:(id)a1;

- (int)finish;
- (struct opaqueCMSampleBuffer { } *)popSample;
- (void).cxx_destruct;
- (void)dealloc;
- (int)setupMetadataTrack;
- (id)initWithURL:(id)a0 andTrack:(id)a1;
- (void)processMediaRequest;
- (int)createAssetWriterInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (int)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1;
- (void)pushSample:(struct opaqueCMSampleBuffer { } *)a0;
- (int)appendMetadataTrack;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id).cxx_construct;

@end
