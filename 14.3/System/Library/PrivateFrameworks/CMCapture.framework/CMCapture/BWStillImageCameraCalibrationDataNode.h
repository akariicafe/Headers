@class NSSet, NSDictionary, BWStillImageCaptureSettings, NSMutableDictionary, FigCalibration;

@interface BWStillImageCameraCalibrationDataNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    BOOL _propagatesDetectedObjects;
    NSDictionary *_baseZoomFactorsByPortType;
    NSSet *_expectedPortTypes;
    BWStillImageCaptureSettings *_captureSettings;
    int _processingMode;
    NSMutableDictionary *_inputSbufsByPortType;
    FigCalibration *_calibrationProcessor;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)setBaseZoomFactorsByPortType:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_clearCaptureRequestState;
- (id)baseZoomFactorsByPortType;
- (id)processorOptions;
- (void)_finishPendingProcessing;
- (int)_loadAndConfigureCalibrationBundle;
- (void)_resolveProcessingMode;
- (BOOL)_receivedExpectedInputsForCaptureRequest;
- (void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 auxiliarySampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_propagateDetectedObjects;
- (id)_sensorConfigurationWithPortraitTuningParameters;
- (id)initWithSensorConfigurationsByPortType:(id)a0;
- (void)setPropagatesDetectedObjects:(BOOL)a0;
- (BOOL)propagatesDetectedObjects;

@end
