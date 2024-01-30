@class FigCaptureLogSmartCameraGating;

@interface BWBoundingBoxInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) BOOL inferenceInputUsesPortraitOrientation;
@property (nonatomic) float trackingThreshold;
@property (nonatomic) float maxMatchCost;
@property (nonatomic) struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } confidenceFilterSettings;
@property (nonatomic) BOOL interiorSuppression;
@property (nonatomic) float interiorSuppressionPadding;
@property (nonatomic) float angularOffsetExponentialSmoothing;
@property (nonatomic) float fontSizeStartReportingThreshold;
@property (nonatomic) float fontSizeStopReportingThreshold;
@property (retain, nonatomic) FigCaptureLogSmartCameraGating *logger;

+ (void)initialize;

- (void)dealloc;

@end
