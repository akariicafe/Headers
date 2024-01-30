@class NSString, NSDictionary;

@interface BWActionCameraSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    BOOL _oneShotFocusScanInProgress;
    BOOL _sceneTooDarkMonitoringEnabled;
    NSDictionary *_luxThresholdsByPortType;
    BOOL _sceneIsTooDark;
}

@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParametersByPortType:(id)a0 videoStabilizationStrength:(int)a1 bravoTelephotoEnabled:(BOOL)a2 attachDebugFrameStatistics:(BOOL)a3;
- (BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatisticsByPortType:(id)a1 sceneFlags:(unsigned long long)a2 flashOrTorchWillBeActive:(BOOL)a3 digitalFlashWillFire:(BOOL)a4 effectStatus:(int *)a5 stagePreviewStatus:(int *)a6;
- (void)setAutoFocusInProgress:(BOOL)a0 focusLocked:(BOOL)a1 oneShotFocusScanInProgress:(BOOL)a2;
- (void)setSDOFBackgroundShiftSum:(float)a0 invalidShiftRatio:(float)a1 closeCanonicalDisparityAverage:(float)a2 faceCanonicalDisparityAverages:(id)a3 erodedForegroundRatio:(float)a4 foregroundRatio:(float)a5 occluded:(BOOL)a6 faces:(id)a7;

@end
