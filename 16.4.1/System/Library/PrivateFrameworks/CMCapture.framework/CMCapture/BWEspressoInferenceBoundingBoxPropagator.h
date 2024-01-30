@class NSString, FTBipartiteMatcher, FigCaptureLogSmartCameraGating, BWInferenceDataRequirement;

@interface BWEspressoInferenceBoundingBoxPropagator : NSObject <BWInferencePropagatable> {
    BWInferenceDataRequirement *_boxRequirement;
    BWInferenceDataRequirement *_scoreRequirement;
    BWInferenceDataRequirement *_angularOffsetRequirement;
    BWInferenceDataRequirement *_fontSizeRequirement;
    NSString *_inferenceResultKey;
    BOOL _suppressInterior;
    float _interiorPadding;
    float _maxMatchCost;
    float _angularOffsetExponentialSmoothing;
    float _fontSizeStartReportingThreshold;
    float _fontSizeStopReportingThreshold;
    FigCaptureLogSmartCameraGating *_logger;
    FTBipartiteMatcher *_matcher;
    long long _maxRegionID;
    BOOL _inferenceInputUsesPortraitOrientation;
    float _trackingThreshold;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _filterTemplate;
    struct { long long x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; float x3; float x4; float x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; float x7; struct BWSmartCameraScene { BOOL x0; BOOL x1; float x2; float x3; float x4; float x5; short x6; short x7; short x8; BOOL x9; char *x10; } x8; } *_lastRegions;
    unsigned long long _lastRegionCount;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (void)dealloc;
- (id)initWithBoxRequirement:(id)a0 scoreRequirement:(id)a1 angularOffsetRequirement:(id)a2 fontSizeRequirement:(id)a3 configuration:(id)a4 toInferenceResultKey:(id)a5;

@end
