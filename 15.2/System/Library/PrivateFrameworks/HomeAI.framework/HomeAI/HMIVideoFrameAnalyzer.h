@class NSString, HMIVideoFrameSampler, MovingAverage;
@protocol HMIVideoFrameAnalyzerDelegate, HMICameraVideoFrameAnalyzer;

@interface HMIVideoFrameAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoFrameSamplerDelegate, HMFLogging> {
    MovingAverage *_analysisTime;
}

@property (readonly) id<HMICameraVideoFrameAnalyzer> cameraVideoFrameAnalyzer;
@property (retain) HMIVideoFrameSampler *frameSampler;
@property (weak) id<HMIVideoFrameAnalyzerDelegate> delegate;
@property (readonly) double averageAnalysisTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)flush;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 motionDetections:(id)a1 motionScore:(double)a2;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;

@end
