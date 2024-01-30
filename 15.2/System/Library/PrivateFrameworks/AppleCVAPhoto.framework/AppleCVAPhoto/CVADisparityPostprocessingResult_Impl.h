@class NSArray, NSString;

@interface CVADisparityPostprocessingResult_Impl : NSObject <CVADisparityPostprocessingResult>

@property (readonly) struct __CVBuffer { } *postprocessedDisparityPixelBuffer;
@property (readonly) float focusDisparity;
@property (readonly) float deltaCanonicalDisparity;
@property (readonly) float backgroundDisparitySum;
@property (readonly) float backgroundDisparitySumVariance;
@property (readonly) float backgroundDisparityRatio;
@property (readonly) float invalidDisparityRatio;
@property (readonly) float invalidDisparityRatioVariance;
@property (readonly) float backgroundSeparationLikelihood;
@property (readonly) float closeCanonicalDisparityAverage;
@property (readonly) NSArray *faceCanonicalDisparityAverage;
@property (readonly) NSArray *faceInvalidDisparityRatio;
@property (readonly) float foregroundRatio;
@property (readonly) float erodedForegroundRatio;
@property (readonly) struct __CVBuffer { } *canonicalDisparityPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPostprocessedDisparityBuffer:(struct __CVBuffer { } *)a0 canonicalDisparityPixelBuffer:(struct __CVBuffer { } *)a1 focusCanonicalDisparity:(float)a2 backgroundDisparitySum:(float)a3 backgroundDisparitySumVariance:(float)a4 backgroundDisparityRatio:(float)a5 invalidDisparityRatio:(float)a6 invalidDisparityRatioVariance:(float)a7 deltaCanonicalDisparity:(float)a8 backgroundSeparationLikelihood:(float)a9 closeCanonicalDisparityAverage:(float)a10 faceCanonicalDisparityAverage:(id)a11 faceInvalidDisparityRatio:(id)a12 foregroundRatio:(float)a13 erodedForegroundRatio:(float)a14;

@end
