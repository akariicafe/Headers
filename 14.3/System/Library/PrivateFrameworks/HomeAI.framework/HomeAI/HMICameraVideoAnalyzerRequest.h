@class NSDate, HMICameraVideoResourceAttributes, HMICameraVideoAssetReader, HMICameraVideoAnalyzer, HMIVideoEncoder, NSMutableArray, HMIVideoRetimer, HMICameraVideoPosterFrameGenerator, HMICameraVideoFrameSelector, NSString, HMIVideoFrameSampler, NSArray, HMIVideoAssetWriter, HMICameraVideoFragment;

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMIVideoEncoderDelegate, HMIVideoRetimerDelegate, HMIVideoFrameSamplerDelegate, HMICameraVideoFrameSelectorDelegate, HMFLogging>

@property (readonly) NSMutableArray *significantEventsInternal;
@property long long phase;
@property long long flag;
@property (readonly) NSDate *analysisSubmissionTime;
@property (readonly) double timeSinceAnalysisSubmission;
@property (readonly) NSDate *analysisStartTime;
@property (readonly) double timeSinceAnalysisStart;
@property (readonly) double maxAnalysisFPS;
@property (readonly) double analysisFPS;
@property (readonly) HMICameraVideoFragment *fragment;
@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly) HMIVideoEncoder *encoder;
@property (readonly) HMIVideoRetimer *retimer;
@property (readonly) HMIVideoFrameSampler *frameSampler;
@property (readonly) NSMutableArray *audioSamples;
@property (readonly) HMIVideoAssetWriter *assetWriter;
@property (readonly) HMICameraVideoPosterFrameGenerator *posterFrameGenerator;
@property (readonly) HMICameraVideoFrameSelector *frameSelector;
@property (readonly) HMICameraVideoAssetReader *assetReader;
@property (readonly) HMICameraVideoAnalyzer *analyzer;
@property (readonly) long long eventTypes;
@property (retain) NSMutableArray *videoFrameResults;
@property (readonly) NSArray *significantEvents;
@property (readonly) BOOL shouldSkipAnalysis;
@property (readonly) BOOL shouldFailAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)cancel;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)loadAttributesFromVideoFragment:(id)a0;
- (void)encoder:(id)a0 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)encoder:(id)a0 didFailWithError:(id)a1;
- (void)retimer:(id)a0 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)selector:(id)a0 maySelectFrame:(id)a1;
- (void)selector:(id)a0 didDetectMotion:(id)a1 atSessionPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameDimensions:(struct CGSize { double x0; double x1; })a3;
- (id)initWithVideoFragment:(id)a0 analyzer:(id)a1 maxAnalysisFPS:(double)a2;
- (void)addSignificantEvent:(id)a0;
- (void)markForPrediction;
- (void)loadAttributes;
- (void)startAnalysis;
- (BOOL)startEncodingSessionForAsset:(id)a0 expectedFrameRate:(long long)a1 error:(id *)a2;
- (BOOL)startPosterFrameGeneratorWithInterval:(unsigned long long)a0 frameHeight:(unsigned long long)a1;
- (BOOL)startAssetReaderWithWorkQueue:(id)a0 logIdentifier:(id)a1;
- (BOOL)startFrameSelector;
- (id)finishEncoderSession;
- (id)makeDidAnalyzeResult;
- (id)makeDidNotAnalyzeResultWithResultCode:(long long)a0;

@end
