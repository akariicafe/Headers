@class AVAssetTrack, AVAssetReader, NSMapTable, AVAssetWriter, AVAssetReaderTrackOutput, NSMutableArray, NSObject, AVAssetWriterInput, AVAsset;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCPMovieAssetWriter : NSObject {
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_audioOutput;
    AVAssetReaderTrackOutput *_videoOrientationOutput;
    AVAssetReaderTrackOutput *_stillImageOutput;
    AVAssetTrack *_track;
    AVAssetTrack *_audioTrack;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_livePhotoInfoInput;
    AVAssetWriterInput *_stillImageInput;
    AVAssetWriterInput *_videoOrientationInput;
    NSMutableArray *_sampleQueue;
    NSMutableArray *_livePhotoInfoQueue;
    NSObject<OS_dispatch_group> *_encodingGroup;
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> *_livePhotoInfoEnqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_livePhotoInfoDequeueSemaphore;
    NSObject<OS_dispatch_queue> *_statusOperationQueue;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillPTS;
    NSMapTable *_inputToOutputMap;
}

@property (readonly) long long status;

+ (id)assetWriterWithURL:(id)a0 andTrack:(id)a1 andBitrate:(long long)a2;

- (int)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;
- (int)dispatchEncoding;
- (void)updateStillPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withAttachment:(id)a2;
- (int)addLivePhotoInfoBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)setupVideoTrack:(long long)a0;
- (int)setupAudioTrack;
- (int)setupMetadataTrack;
- (id)initWithURL:(id)a0 andTrack:(id)a1 andBitrate:(long long)a2;
- (struct opaqueCMSampleBuffer { } *)popSample;
- (int)processLivePhotoInfoMetadataTrack;
- (int)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1;
- (void)pushSample:(struct opaqueCMSampleBuffer { } *)a0;
- (void)pushLivePhotoInfoSample:(struct opaqueCMSampleBuffer { } *)a0;
- (int)processStillImageMetadataTrack;
- (int)passthroughMetadataTrackFrom:(id)a0 to:(id)a1;
- (struct opaqueCMSampleBuffer { } *)popLivePhotoInfoSample;
- (int)appendMetadataTrack;

@end
