@class FigCapturePixelConverter, NSString, NSDictionary, FigCaptureStillImageSettings, BWNodeOutput, BWStillImageCaptureSettings, NSMutableDictionary;

@interface BWGNRNode : BWNode {
    BOOL _sisEnabled;
    BOOL _oisEnabled;
    BOOL _hdrEnabled;
    BOOL _processingLTMHDRFusion;
    BWNodeOutput *_bravoHDRDisparityOutput;
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSString *_portType;
    NSString *_sensorID;
    NSDictionary *_sensorIDDictionary;
    NSString *_telephotoPortType;
    NSString *_telephotoSensorID;
    NSDictionary *_telephotoSensorIDDictionary;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _processingType;
    BOOL _clientExpectsPreBracketFrame;
    BOOL _expectsPreBracketFrame;
    BOOL _receivedPreBracketFrame;
    unsigned int _expectedFrameCount;
    unsigned int _receivedFrameCount;
    BOOL _receivedAllFrames;
    int _receivedReferenceFrameBracketedCaptureSequenceNumber;
    int _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    BOOL _processingHDREV0BracketFrame;
    int _hdrEV0BracketCaptureIdentifier;
    int _hdrDisparityBracketedCaptureSequenceNumber;
    NSMutableDictionary *_inputAttachedMedia;
    struct opaqueCMSampleBuffer { } *_collectedUnprocessedPreBracketHDR;
    FigCapturePixelConverter *_stereoFusedGNRHDRPixelConverter;
    long long _previouslyCompletedFusionSettingsID;
    BOOL _usesHDRPreBracketFrameForErrorRecoveryDownstream;
    BOOL _allowedToModifyInputBuffers;
}

+ (void)initialize;

- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_sampleBufferProcessorOutputReady:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_clearCaptureRequestState;
- (unsigned int)_worstCaseFrameRetainCount;
- (void)_setExpectedFrameCountForPortType:(id)a0;
- (int)_gnrProcessingTypeWithMetadataDictionary:(id)a0;
- (BOOL)_isBravoHDRDepthDataCapture;
- (id)_initWithSISEnabled:(BOOL)a0 OISEnabled:(BOOL)a1 LTMHDREnabled:(BOOL)a2 processingLTMHDRFusion:(BOOL)a3 portType:(id)a4 sensorID:(id)a5 sensorIDDictionary:(id)a6 telephotoPortType:(id)a7 telephotoSensorID:(id)a8 telephotoSensorIDDictionary:(id)a9 sbpCreationFunction:(void /* function */ *)a10 treatSoftErrorsAsHardErrors:(BOOL)a11;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { } *)a0 value:(void *)a1;
- (void)_processSequenceInSampleBufferProcessor;
- (struct opaqueCMSampleBuffer { } *)_copyAndZoomSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingNormalizedZoomRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (BOOL)_receivedExpectedAmountOfFrames;
- (BOOL)_isBravoTelephotoHDRDepthDataCapture;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)a0;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (id)sbpOptionsDictionary;
- (void)_handleSBPReferenceFrame:(int)a0;
- (BOOL)_isBravoDepthDataCapture;
- (id)initWithSISEnabled:(BOOL)a0 OISEnabled:(BOOL)a1 LTMHDREnabled:(BOOL)a2 processingLTMHDRFusion:(BOOL)a3 portType:(id)a4 sensorID:(id)a5 sensorIDDictionary:(id)a6 telephotoPortType:(id)a7 telephotoSensorID:(id)a8 telephotoSensorIDDictionary:(id)a9;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)a0;
- (BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (BOOL)allowedToModifyInputBuffers;
- (void)setAllowedToModifyInputBuffers:(BOOL)a0;
- (int)_setupSampleBufferProcessor;

@end
