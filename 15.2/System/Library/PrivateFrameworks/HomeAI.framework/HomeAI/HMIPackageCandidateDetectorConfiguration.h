@class HMIBoundingBoxExtractorConfiguration;

@interface HMIPackageCandidateDetectorConfiguration : HMFObject

@property (readonly) float deltaEThreshold;
@property (readonly) float densityThresholdPreAverage;
@property (readonly) float temporalDensityThreshold;
@property (readonly) float densityMapScale;
@property (readonly) float temporalAverageDecay;
@property (readonly) HMIBoundingBoxExtractorConfiguration *boundingBoxConfig;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)initWithDeltaEThreshold:(float)a0 densityThresholdPreAverage:(float)a1 temporalDensityThreshold:(float)a2 densityMapScale:(float)a3 temporalAverageDecay:(float)a4 boundingBoxConfig:(id)a5;

@end
