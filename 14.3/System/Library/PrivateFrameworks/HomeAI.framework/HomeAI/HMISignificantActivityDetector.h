@class NSString, MLModel, NSArray, HMINMSConfiguration, MLPredictionOptions;

@interface HMISignificantActivityDetector : HMFObject <HMFLogging> {
    double _confidenceThresholds[91];
    struct CGSize { double width; double height; } _anchorSizes[6][6];
    unsigned long long _numberOfAnchors[6];
}

@property (readonly) MLModel *mlModel;
@property (readonly) NSString *inputFeatureValueName;
@property (readonly) NSArray *offsetsFeatureValueNames;
@property (readonly) NSArray *scoresFeatureValueNames;
@property (readonly) NSArray *yawsFeatureValueNames;
@property (readonly) NSArray *rollsFeatureValueNames;
@property (readonly) HMINMSConfiguration *nmsConfiguration;
@property (readonly) BOOL useSoftmax;
@property (readonly) MLPredictionOptions *predictionOptions;
@property (readonly) struct CGSize { double width; double height; } inputDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultAssetPath;

- (void).cxx_destruct;
- (BOOL)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer { } *)a0 offsets:(id)a1 scores:(id)a2 yaws:(id)a3 rolls:(id)a4 error:(id *)a5;
- (void)_postProcessOffsets:(id)a0 scores:(id)a1 yaws:(id)a2 rolls:(id)a3 outputPredictions:(id)a4;
- (id)initWithConfidenceThresholds:(id)a0 nmsConfiguration:(id)a1 assetPath:(id)a2 error:(id *)a3;
- (BOOL)predict:(struct __CVBuffer { } *)a0 detectedObjects:(id)a1 error:(id *)a2;

@end
