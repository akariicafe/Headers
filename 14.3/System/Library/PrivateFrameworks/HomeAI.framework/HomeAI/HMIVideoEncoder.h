@class NSString;
@protocol HMIVideoEncoderDelegate;

@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging> {
    struct OpaqueVTCompressionSession { } *_session;
    BOOL _forceKeyFrameOnNextEncodedFrame;
    struct { int width; int height; } _dimensions;
    unsigned int _codecType;
    BOOL _realTime;
}

@property (weak) id<HMIVideoEncoderDelegate> delegate;
@property (nonatomic) long long averageBitRate;
@property (nonatomic) long long maxKeyFrameIntervalDuration;
@property (nonatomic) struct HMIVideoEncoderDataRate { long long bytes; long long seconds; } dataRateLimit;
@property (nonatomic) long long expectedFrameRate;
@property (nonatomic) double expectedDuration;
@property (readonly) unsigned long long numberOfDroppedFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDimensions:(struct { int x0; int x1; })a0 codecType:(unsigned int)a1 realTime:(BOOL)a2 error:(id *)a3;
- (BOOL)_initSessionWithError:(id *)a0;
- (void)_invalidateSession;
- (BOOL)_encodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attemptRecovery:(BOOL)a1;

@end
