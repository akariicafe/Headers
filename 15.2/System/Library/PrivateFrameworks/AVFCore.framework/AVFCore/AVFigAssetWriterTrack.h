@class NSString, AVMediaFileType, AVWeakReference, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetWriterTrack : NSObject {
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    BOOL _aboveHighWaterLevel;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) struct OpaqueFigAssetWriter { } *figAssetWriter;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) AVMediaFileType *mediaFileType;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (readonly, nonatomic) BOOL encoderSupportsMultiPass;
@property (readonly, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleBufferCoalescingInterval;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(BOOL)a5 attachedAdaptor:(id)a6 error:(id *)a7;

- (void)setExtendedLanguageTag:(id)a0;
- (void)setSampleReferenceBaseURL:(id)a0;
- (void)setLayer:(long long)a0;
- (void)setMediaTimeScale:(int)a0;
- (void)setMarksOutputTrackAsEnabled:(BOOL)a0;
- (void)setAlternateGroupID:(short)a0;
- (void)prepareToEndSession;
- (void)setProvisionalAlternateGroupID:(short)a0;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)a0 sourcePixelBufferAttributes:(id)a1 multiPass:(BOOL)a2 error:(id *)a3;
- (void)setLanguageCode:(id)a0;
- (BOOL)markEndOfDataReturningError:(id *)a0;
- (void)setMediaDataLocation:(id)a0;
- (id)init;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (void)dealloc;
- (void)setFigMetadata:(id)a0;
- (void)setFigTrackMatrix:(id)a0;
- (void)setFormatDescriptions:(id)a0;
- (void)setExcludeFromAutoSelection:(BOOL)a0;
- (void)setFigDimensions:(id)a0;
- (void)setTrackVolume:(float)a0;
- (void)setPreferredChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPreferredChunkAlignment:(long long)a0;
- (void)setPreferredChunkSize:(long long)a0;
- (BOOL)beginPassReturningError:(id *)a0;
- (BOOL)addPixelBuffer:(struct __CVBuffer { } *)a0 atPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (void)endPassWithCompletionHandler:(id /* block */)a0;
- (void)_refreshAboveHighWaterLevel;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)a0;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(BOOL)a5 error:(id *)a6;

@end
