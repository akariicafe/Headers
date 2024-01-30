@class BWNodeError, BWNodeInput, NSMutableArray;

@interface BWDepthSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    NSMutableArray *_imageBufferQueue;
    NSMutableArray *_depthBufferQueue;
    int _maxQueueDepth;
    int _lastEmittedFrameCaptureID;
    int _lastReceivedImageID;
    int _lastReceivedDepthID;
    int _imageIDWrapAroundCounter;
    int _depthIDWrapAroundCounter;
    BOOL _discardsDegradedDepthBuffers;
    BOOL _separateDepthComponentsEnabled;
    BOOL _streaming;
    BWNodeError *_errorForImageInput;
    BWNodeError *_errorForDepthInput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
}

@property (readonly) BWNodeInput *imageInput;
@property (readonly) BWNodeInput *depthInput;
@property (nonatomic) BOOL discardsDegradedDepthBuffers;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_tryToEmitBuffers;
- (id)_bufferArrayToString:(id)a0;
- (id)initForStreaming:(BOOL)a0 separateDepthComponentsEnabled:(BOOL)a1;
- (void)_setupDepthMediaConfigurationForOutput:(id)a0 inputAttachedMediaKey:(id)a1 outputAttachedMediaKey:(id)a2;
- (BOOL)_isDepthExpectedForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_frameCaptureID:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_attachDepthDataToSampleBufferOrReportDepthMissing:(struct opaqueCMSampleBuffer { } *)a0 isDepthMissing:(BOOL *)a1;
- (void)_cleanupDepthBufferQueue;

@end
