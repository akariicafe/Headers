@class _PASLock, TRIClient;

@interface SGMITrialClientWrapper : NSObject {
    _PASLock *_lock;
}

@property (retain, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;

- (id)isEnabled;
- (id)modelPath;
- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)loadFactors;
- (id)trialMetadata;
- (id)minCountToConsiderATokenAsHighlyDiscriminant;
- (id)ratioToConsiderATokenAsHighlyDiscriminant;
- (id)minCountToConsiderATokenAsExtremelyDiscriminant;
- (id)ratioToConsiderATokenAsExtremelyDiscriminant;
- (id)bodyAnalysisSamplingFactor;
- (id)loadLevelAsModelPath:(id)a0;
- (id)loadLevelAsBooleanFromFactor:(id)a0;
- (id)loadLevelAsNumericFromFactor:(id)a0;
- (id)loadLevelAsLongFromFactor:(id)a0;
- (id)loadLevelAsStringFromFactor:(id)a0;
- (id)loadLevelAsStringArrayFromFactor:(id)a0;
- (id)loadLevelAsNumericArrayFromFactor:(id)a0;
- (id)loadLevelAsNumericDictionaryFromFactor:(id)a0;
- (id)concatPathWithPrefix:(id)a0 suffix:(id)a1 extra:(id)a2;
- (id)arrayFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)dictionaryFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)isDNUOnlyEnablement;
- (id)modelGroundTruthVersion;
- (id)modelInferenceVersion;
- (id)modelFeatureNames;
- (id)modelFeatureStandardizationMeans;
- (id)modelFeatureStandardizationStandardDeviations;
- (id)modelGroundTruthFeatureNames;
- (id)modelGroundTruthFeatureLowerBounds;
- (id)modelGroundTruthFeatureUpperBounds;
- (id)modelGroundTruthOutputs;
- (id)saliencyOverrideFeatureNames;
- (id)saliencyOverrideFeatureLowerBounds;
- (id)saliencyOverrideFeatureUpperBounds;
- (id)saliencyOverrideOutputs;
- (id)classificationThreshold;
- (id)classificationOfflinePrecision;
- (id)classificationOfflineRecall;
- (id)attachmentDetectionRegexes;
- (id)recipientDetectionRegexes;
- (id)followUpDetectionRegexes;

@end
