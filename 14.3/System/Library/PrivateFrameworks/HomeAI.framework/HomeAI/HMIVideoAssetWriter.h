@class NSString, AVAssetWriter, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, HMIVideoAssetWriterDelegate;

@interface HMIVideoAssetWriter : HMIVideoProcessingNode <AVAssetWriterDelegate, HMFLogging> {
    AVAssetWriter *_assetWriter;
    BOOL _skipInitializationSegment;
    BOOL _dropSamplesUntilSync;
    BOOL _dropTrimDurationAttachments;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct opaqueCMFormatDescription { } *_audioFormat;
}

@property (weak) id<HMIVideoAssetWriterDelegate> delegate;
@property BOOL allowRecovery;
@property unsigned long long nextSequenceNumber;
@property BOOL allowRecoveryFromInsufficientAudioTrim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)assetWriter:(id)a0 didOutputSegmentData:(id)a1 segmentType:(long long)a2 segmentReport:(id)a3;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithVideoFormat:(const struct opaqueCMFormatDescription { } *)a0 audioFormat:(const struct opaqueCMFormatDescription { } *)a1;
- (void)_failWithDescription:(id)a0;
- (void)_checkNotStarted;
- (void)_appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_createAssetWriterWithInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_removeTrimDurationAttachmentsFromAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_ensureAudioSampleBufferHasSufficientPrimingTrim:(struct opaqueCMSampleBuffer { } *)a0;

@end
