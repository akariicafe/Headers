@class BWNodeInput, FigCaptureStillImageSettings, NSDictionary, BWStillImageCaptureSettings, BWNodeError, BWStillImageNodeConfiguration, FigDisparityGenerator;

@interface BWStillImageBravoDisparityNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    FigDisparityGenerator *_disparityGenerator;
    unsigned long long _disparityMapWidth;
    unsigned long long _disparityMapHeight;
    struct opaqueCMFormatDescription { } *_disparityFormatDescription;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _expectedDisparityCount;
    int _deliveredDisparityCount;
    int _processingMode;
    struct opaqueCMSampleBuffer { } *_teleSbuf;
    struct opaqueCMSampleBuffer { } *_wideSbuf;
    BOOL _emitTeleFrame;
    BOOL _emitWideFrame;
    BWNodeError *_errorForWide;
    BWNodeError *_errorForTele;
    BOOL _shouldComputeDisparityWhenCalibrationFails;
    BOOL _disparityInputIsRaw;
    BWStillImageNodeConfiguration *_nodeConfiguration;
}

@property (readonly, nonatomic) BWNodeInput *wideInput;
@property (readonly, nonatomic) BWNodeInput *telephotoInput;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_clearCaptureRequestState;
- (void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1;
- (void)_handleError:(int)a0 duringProcessingOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromInput:(id)a2;
- (void)_processBuffersForDisparityIfNecessary;
- (void)_computeDisparityForTeleBuffer:(struct opaqueCMSampleBuffer { } *)a0 wideBuffer:(struct opaqueCMSampleBuffer { } *)a1 attachToOutputBuffer:(struct opaqueCMSampleBuffer { } *)a2;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)processorOptionsDictionary;
- (BOOL)shouldComputeDisparityWhenCalibrationFails;
- (int)_OSStatusFromDisparityResult:(int)a0;
- (void)_finishPendingProcessing;
- (void)_resolveProcessingMode;
- (id)_sensorConfigurationWithPortraitTuningParameters;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 disparityMapWidth:(unsigned long long)a2 disparityMapHeight:(unsigned long long)a3 outputDisparityBufferCount:(int)a4;
- (void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)a0;
- (int)_loadAndConfigureDisparityGenerator;

@end
