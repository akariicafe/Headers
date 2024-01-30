@class HMIHTMLReport, HMICameraVideoFrameAnalyzerSignificantActivity, HMIVideoFrame, NSString, HMIVideoFrameIntervalSampler, HMIBackgroundEstimator, NSNumber;
@protocol HMIVideoPackageAnalyzerDelegate;

@interface HMIVideoPackageAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging>

@property (readonly) HMIVideoFrameIntervalSampler *sampler;
@property (readonly) long long packageClassifierMode;
@property (readonly) HMICameraVideoFrameAnalyzerSignificantActivity *packageDetector;
@property (readonly) HMIBackgroundEstimator *backgroundEstimator;
@property (readonly) HMIHTMLReport *report;
@property (readonly) NSNumber *highConfidence;
@property (readonly) NSNumber *mediumConfidence;
@property int numberOfDetectedPackagesInSession;
@property (retain) HMIVideoFrame *referenceFrame;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastDetectionAnalysisTimeStamp;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } detectionAnalysisInterval;
@property (weak) id<HMIVideoPackageAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)eventConfidenceThresholdMedium;
+ (id)eventConfidenceThresholdHigh;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleMotionDetection:(id)a0 inFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestFromEvents:(id)a0 frameSize:(struct CGSize { double x0; double x1; })a1;
- (id)eventsFromRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frame:(id)a1;

@end
