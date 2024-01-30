@class NSMutableDictionary, AVWeakReference, NSSet, NSMutableArray;

@interface AVOfflineVideoStabilizer : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetFrameDuration;
    int _metadataPrimingCount;
    float _lookAheadTime;
    AVWeakReference *_dataProviderWeakReference;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    BOOL _clientMarkedEndOfVideoData;
    long long _videoOutputFrameNumber;
    struct opaqueCMFormatDescription { } *_cachedVideoFormatDescription;
    NSMutableDictionary *_cachedInputBufferAttributes;
    BOOL _clientMarkedEndOfMetadata;
    long long _metadataOutputFrameNumber;
    NSMutableArray *_futureFrameMetadataDicts;
    NSSet *_requiredMetadataKeys;
    NSSet *_optionalMetadataKeys;
    struct OpaqueFigSampleBufferProcessor { } *_gvsProcessor;
    BOOL _stabilizationEnabled;
    BOOL _isFirstFrame;
}

@property (readonly, nonatomic) NSMutableArray *outputSampleBuffers;
@property (readonly, nonatomic) int preferredSourcePixelBufferPrimingFrameCount;
@property (readonly, nonatomic) int preferredSourceStabilizationMetadataPrimingCount;

+ (void)initialize;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 dataProvider:(id)a1 destinationBufferPool:(struct __CVPixelBufferPool { } *)a2 stabilizationEnabled:(BOOL)a3;

- (void)dealloc;
- (id)initWithTargetFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 dataProvider:(id)a1 destinationBufferPool:(struct __CVPixelBufferPool { } *)a2 stabilizationEnabled:(BOOL)a3;
- (void)_teardownVISProcessor;
- (struct opaqueCMSampleBuffer { } *)_copyStabilizedSampleBuffer:(id *)a0;
- (int)_validateStabilizationMetadata:(id)a0 withSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isEndOfData:(BOOL *)a2;
- (int)_setupGVSProcessor;
- (int)_validateSourcePixelBuffer:(struct __CVBuffer { } *)a0 withSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadata:(id)a2 isEndOfData:(BOOL *)a3;
- (struct opaqueCMSampleBuffer { } *)_createSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0 sampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 futureMetadata:(id)a2 status:(int *)a3;
- (unsigned long long)_extendedRowsOfOutputBuffer;
- (struct opaqueCMSampleBuffer { } *)copyStabilizedSampleBuffer:(id *)a0;

@end
