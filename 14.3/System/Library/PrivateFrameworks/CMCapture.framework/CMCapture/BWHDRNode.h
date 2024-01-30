@class FigCapturePixelConverter, NSArray, NSDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSMutableArray, BWPixelBufferPool;

@interface BWHDRNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    struct opaqueCMSampleBuffer *_pendingBracketBuffers[3];
    BOOL _preBracketedFrameExpected;
    BOOL _preBracketedFrameReceived;
    NSMutableArray *_receivedNodeErrors;
    unsigned int _emittedFrameOrErrorCount;
    BOOL _alwaysRequestsPreBracketedEV0;
    BOOL _supportsStereoFusionCaptures;
    FigCapturePixelConverter *_stereoFusionPixelConverter;
    BWPixelBufferPool *_telephotoHDREV0DisparityBufferPool;
    struct opaqueCMFormatDescription { } *_telephotoHDREV0DisparityFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_telephotoHDREV0DisparityCopySession;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)_emitNodeErrorToReportFailedOutputFrame;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)_hdrProcessorOutputReady:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)dealloc;
- (void)setSupportsStereoFusionCaptures:(BOOL)a0;
- (void)_clearCaptureRequestState;
- (BOOL)_receivedExpectedNumberOfInputFramesOrErrors;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1;
- (void)_emitNodeErrorsIfNecessary;
- (BOOL)supportsStereoFusionCaptures;
- (id)initWithClientPID:(int)a0 sensorIDDictionary:(id)a1;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)a0;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)_initWithClientPID:(int)a0 sensorIDDictionary:(id)a1 sbpCreationFunction:(void /* function */ *)a2;
- (int)_setupSampleBufferProcessor;

@end
