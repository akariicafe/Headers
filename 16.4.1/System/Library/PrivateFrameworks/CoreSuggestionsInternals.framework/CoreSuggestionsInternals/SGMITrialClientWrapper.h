@class _PASLock, TRIClient;

@interface SGMITrialClientWrapper : NSObject {
    _PASLock *_lock;
}

@property (retain, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;

- (void)refresh;
- (id)modelPath;
- (id)isEnabled;
- (void)loadFactors;
- (id)init;
- (void).cxx_destruct;
- (id)arrayFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)attachmentDetectionRegexes;
- (id)attachmentLinkDetection;
- (id)bodyAnalysisSamplingFactor;
- (id)classificationOfflinePrecision;
- (id)classificationOfflineRecall;
- (id)classificationThreshold;
- (id)concatPathWithPrefix:(id)a0 suffix:(id)a1 extra:(id)a2;
- (id)conservativeRecipientDetection;
- (id)defaultTimeIntervalForAWarning;
- (id)defaultTimeIntervalToStartWarningExposition;
- (id)dictionaryFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)followUpOnIncomingMailsDetectionRegexes;
- (id)followUpOnOutgoingMailsAsksDetectionRegexes;
- (id)followUpOnOutgoingMailsQuestionsDetectionRegexes;
- (id)followUpWarningsParameters;
- (id)isDNUOnlyEnablement;
- (id)loadLevelAsBooleanFromFactor:(id)a0;
- (id)loadLevelAsLongFromFactor:(id)a0;
- (id)loadLevelAsModelPath:(id)a0;
- (id)loadLevelAsNumericArrayFromFactor:(id)a0;
- (id)loadLevelAsNumericDictionaryFromFactor:(id)a0;
- (id)loadLevelAsNumericFromFactor:(id)a0;
- (id)loadLevelAsStringArrayFromFactor:(id)a0;
- (id)loadLevelAsStringFromFactor:(id)a0;
- (id)minCountToConsiderATokenAsExtremelyDiscriminant;
- (id)minCountToConsiderATokenAsHighlyDiscriminant;
- (id)modelFeatureNames;
- (id)modelFeatureStandardizationMeans;
- (id)modelFeatureStandardizationStandardDeviations;
- (id)modelGroundTruthFeatureLowerBounds;
- (id)modelGroundTruthFeatureNames;
- (id)modelGroundTruthFeatureUpperBounds;
- (id)modelGroundTruthOutputs;
- (id)modelGroundTruthVersion;
- (id)modelInferenceVersion;
- (id)nicknameDetectionRegexes;
- (id)ratioToConsiderATokenAsExtremelyDiscriminant;
- (id)ratioToConsiderATokenAsHighlyDiscriminant;
- (id)recipientConservativeDetectionRegexes;
- (id)recipientDetectionRegexes;
- (id)saliencyOverrideFeatureLowerBounds;
- (id)saliencyOverrideFeatureNames;
- (id)saliencyOverrideFeatureUpperBounds;
- (id)saliencyOverrideOutputs;
- (id)signatureStatsLogging;
- (id)trialMetadata;
- (id)trialMetadataString;

@end
