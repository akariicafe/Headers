@class BWMRCGatingOutputController, NSString, BWPixelBufferPool, BWNodeOutput, NSMutableArray, BWSceneStabilityMonitor;
@protocol BWMRCDetectedResultsObserver;

@interface BWMRCGatingNode : BWFanOutNode <BWMRCSceneObserver> {
    BWMRCGatingOutputController *_mrcOutputController;
    BWMRCGatingOutputController *_appClipCodeOutputController;
    NSMutableArray *_outputControllers;
    BOOL _lowPowerModeEnabled;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_outputBufferPool;
    struct { int width; int height; } _outputBufferPoolDimensions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sceneLock;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _qrCodeScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _appClipCodeScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _qrCodeSceneForAppClipCode;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _appClipCodeSceneWithQRCodes;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _documentScene;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
}

@property (readonly, nonatomic) BWNodeOutput *mrcOutput;
@property (readonly, nonatomic) BWNodeOutput *appClipCodeOutput;
@property (readonly, nonatomic) id<BWMRCDetectedResultsObserver> mrcResultsObserver;
@property (readonly, nonatomic) id<BWMRCDetectedResultsObserver> appClipCodeResultsObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_updateInputRequirements;
- (int)_ensureTransferSession;
- (void)sceneDidChangeQRConfidence:(float)a0 appClipCodeConfidence:(float)a1 documentConfidence:(float)a2;
- (id)initWithMRCEnabled:(BOOL)a0 appClipCodeEnabled:(BOOL)a1 lowPowerModeEnabled:(BOOL)a2;
- (void)_updateOutputRequirementsIfNecessary;
- (id)_pixelFormatsSupportedByMRCAlgorithm;
- (struct __CVBuffer { } *)_createOutputPixelBufferFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_anyOutputShouldApplySceneMotion;
- (BOOL)_anyOutputShouldRunDetection;
- (int)_ensureOutputBufferPoolWithDimensions:(struct { int x0; int x1; })a0;
- (id)initWithSceneClassifierVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0 mrcEnabled:(BOOL)a1 appClipCodeEnabled:(BOOL)a2 lowPowerModeEnabled:(BOOL)a3;

@end
