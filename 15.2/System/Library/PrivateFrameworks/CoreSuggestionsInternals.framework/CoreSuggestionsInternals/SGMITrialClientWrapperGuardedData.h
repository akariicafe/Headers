@class NSString, NSArray, NSDictionary, NSNumber;

@interface SGMITrialClientWrapperGuardedData : NSObject {
    NSNumber *_isEnabled;
    NSNumber *_isDNUOnlyEnablement;
    NSString *_modelGroundTruthVersion;
    NSString *_modelInferenceVersion;
    NSString *_modelPath;
    NSArray *_modelFeatureNames;
    NSArray *_modelFeatureStandardizationMeans;
    NSArray *_modelFeatureStandardizationStandardDeviations;
    NSArray *_modelGroundTruthFeatureNames;
    NSArray *_modelGroundTruthFeatureLowerBounds;
    NSArray *_modelGroundTruthFeatureUpperBounds;
    NSArray *_modelGroundTruthOutputs;
    NSArray *_saliencyOverrideFeatureNames;
    NSArray *_saliencyOverrideFeatureLowerBounds;
    NSArray *_saliencyOverrideFeatureUpperBounds;
    NSArray *_saliencyOverrideOutputs;
    NSNumber *_classificationThreshold;
    NSNumber *_classificationOfflinePrecision;
    NSNumber *_classificationOfflineRecall;
    NSDictionary *_attachmentDetectionRegexes;
    NSDictionary *_recipientDetectionRegexes;
    NSDictionary *_followUpDetectionRegexes;
    NSNumber *_bodyAnalysisSamplingFactor;
    NSNumber *_minCountToConsiderATokenAsHighlyDiscriminant;
    NSNumber *_ratioToConsiderATokenAsHighlyDiscriminant;
    NSNumber *_minCountToConsiderATokenAsExtremelyDiscriminant;
    NSNumber *_ratioToConsiderATokenAsExtremelyDiscriminant;
}

- (void).cxx_destruct;

@end
