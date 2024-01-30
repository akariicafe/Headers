@class BWNodeInput, FigCaptureStillImageSettings, NSDictionary, BWStillImageCaptureSettings, BWNodeOutput, NSMutableArray;

@interface BWStereoFusionNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_telephotoSensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BOOL _expectsWideFrame;
    BOOL _receivedWideFrame;
    BOOL _expectsTelephotoFrame;
    BOOL _receivedTelephotoFrame;
    BOOL _performSBPProcessing;
    NSDictionary *_sbpZoomRectangleDictionary;
    BWNodeInput *_masterInput;
    NSMutableArray *_nodeErrorsForWide;
    NSMutableArray *_nodeErrorsForTelephoto;
}

@property (readonly, nonatomic) BWNodeInput *wideInput;
@property (readonly, nonatomic) BWNodeInput *telephotoInput;
@property (readonly, nonatomic) BWNodeOutput *defaultOutput;
@property (readonly, nonatomic) BWNodeOutput *stereoHDROutput;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)_endSequence;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)_setExpectedInputFramesWithResolvedCaptureSettings:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)_initWithTelephotoSensorIDDictionary:(id)a0 cameraInfoByPortType:(id)a1 sbpCreationFunction:(void /* function */ *)a2 treatSoftErrorsAsHardErrors:(BOOL)a3;
- (void)_processSampleBufferInSampleBufferProcessor:(struct opaqueCMSampleBuffer { } *)a0 metadataDictionary:(id)a1;
- (void)_handleError:(int)a0 forSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 input:(id)a2;
- (BOOL)_receivedExpectedNumberOfFramesOrErrors;
- (void)_setZoomRectangleOnSampleBufferProcessorIfNecessaryBasedOnMetadata:(id)a0 captureType:(int)a1;
- (BOOL)isCaptureRequestStateReset;
- (void)_setZoomRectangleOnSampleBufferProcessorWithRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTelephotoSensorIDDictionary:(id)a0 cameraInfoByPortType:(id)a1;
- (struct OpaqueFigSampleBufferProcessor { } *)sampleBufferProcessor;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_sampleBufferProcessorOutputReady:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_clearCaptureRequestState;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { } *)a0 value:(void *)a1;
- (void)_processSequenceInSampleBufferProcessor;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (id)sbpOptionsDictionary;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (int)_setupSampleBufferProcessor;

@end
