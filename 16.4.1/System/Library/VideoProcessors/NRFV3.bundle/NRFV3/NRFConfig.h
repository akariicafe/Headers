@interface NRFConfig : NSObject {
    unsigned long long _allocatorForceSize;
    BOOL _allocatorWireMemory;
    int _allocatorType;
    BOOL _allowFallbackAllocation;
    int _compressionLevel;
    BOOL _allocateOnSetup;
    BOOL _useIOSurfaceForMTLBuffer;
    int _regMethod;
    BOOL _enableFlickerDetection;
    BOOL _enableGrayGhostDetection;
    BOOL _forceEnableMotionDetection;
    int _defaultDoRedFaceFix;
    int _isAsynchronous;
    int _ctxCreateSynchronization;
    int _gpuPriority;
    BOOL _isPanoramaMode;
    BOOL _isOnlySingleImage;
    BOOL _isDepthEnabled;
    BOOL _enableDeepFusion;
    BOOL _isFFCPortType;
    BOOL _enableUBFusion;
    BOOL _enableProgressiveFusion;
    int _patchBasedFusionMode;
    BOOL _enableChromaticAberrationCorrection;
    BOOL _enableGreenTintCorrection;
    BOOL _workaroundMissingMetadata;
    BOOL _enableBilateralGridForHybridRegistration;
    BOOL _denseForAll;
    BOOL _enableGainMap;
    BOOL _enableSemanticStyles;
    int _forceToneCurve;
    BOOL _forceSoftwareCSC;
    BOOL _applyGDCtoInputs;
    float _gdcAmount;
    BOOL _gdcIgnoreModifyInputs;
    int _greenGhostMitigationType;
    BOOL _enableSTF;
    BOOL _quadraSupportEnabled;
    BOOL _learnedNREnabled;
}

- (id)initWithDefaults:(id)a0;
- (void)dealloc;

@end
