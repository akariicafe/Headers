@class NSString, HMIMLModel, NSArray, HMINMSConfiguration;

@interface HMISignificantActivityFcosDetector : HMFObject <HMFLogging> {
    float _confidenceThresholds[7];
    struct CGSize { double width; double height; } _anchorStrides[5];
}

@property (class, readonly) HMIMLModel *sharedModel;

@property (readonly) NSString *inputFeatureValueName;
@property (readonly) NSArray *offsetsZeroFeatureValueNames;
@property (readonly) NSArray *offsetsOneFeatureValueNames;
@property (readonly) NSArray *scoresFeatureValueNames;
@property (readonly) NSArray *yawsFeatureValueNames;
@property (readonly) NSArray *rollsFeatureValueNames;
@property (readonly) HMINMSConfiguration *nmsConfiguration;
@property (readonly) struct CGSize { double width; double height; } inputDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultAssetPath;
+ (id)defaultNMSConfiguration;

- (void).cxx_destruct;
- (void)_postProcessOffsetsZero:(id)a0 offsetsOne:(id)a1 scores:(id)a2 yaws:(id)a3 rolls:(id)a4 outputPredictions:(id)a5;
- (BOOL)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer { } *)a0 offsetsZero:(id)a1 offsetsOne:(id)a2 scores:(id)a3 yaws:(id)a4 rolls:(id)a5 error:(id *)a6;
- (id)initWithConfidenceThresholds:(id)a0 nmsConfiguration:(id)a1 error:(id *)a2;
- (BOOL)predict:(struct __CVBuffer { } *)a0 detectedObjects:(id)a1 error:(id *)a2;

@end
