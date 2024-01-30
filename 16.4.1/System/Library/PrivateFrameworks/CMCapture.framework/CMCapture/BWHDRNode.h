@class BWStillImageSettings, NSArray, NSDictionary, FigCapturePixelConverter, BWPixelBufferPool, NSMutableArray;

@interface BWHDRNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    BWStillImageSettings *_currentStillImageSettings;
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
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (id)_initWithClientPID:(int)a0 sensorIDDictionary:(id)a1 sbpCreationFunction:(void /* function */ *)a2;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (id)initWithClientPID:(int)a0 sensorIDDictionary:(id)a1;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)a0;
- (void)setSupportsStereoFusionCaptures:(BOOL)a0;
- (BOOL)supportsStereoFusionCaptures;

@end
