@class NSString, NSDictionary;

@interface CSAsset : NSObject {
    NSDictionary *_decodedInfo;
}

@property (readonly, nonatomic) NSString *CVTConfigPathNDAPI;
@property (readonly, nonatomic) float CVTThreshold;
@property (readonly, nonatomic) float CVTTwoShotThreshold;
@property (readonly, nonatomic) float CVTTwoShotDecisionWaitTime;
@property (readonly, nonatomic) BOOL containsSpeakerRecognitionCategory;
@property (readonly, nonatomic) float satScoreThreshold;
@property (readonly, nonatomic) long long multiUserLowScoreThreshold;
@property (readonly, nonatomic) long long multiUserHighScoreThreshold;
@property (readonly, nonatomic) long long multiUserConfidentScoreThreshold;
@property (readonly, nonatomic) long long multiUserDeltaScoreThreshold;
@property (readonly, nonatomic) float psrCombinationWeight;
@property (readonly, nonatomic) float satImplicitProfileThreshold;
@property (readonly, nonatomic) float satImplicitProfileDeltaThreshold;
@property (readonly, nonatomic) float satVTImplicitThreshold;
@property (readonly, nonatomic) BOOL satImplicitTrainingEnabled;
@property (readonly, nonatomic) float pruningExplicitUttThresholdSAT;
@property (readonly, nonatomic) float pruningExplicitUttThresholdPSR;
@property (readonly, nonatomic) float pruningThresholdSAT;
@property (readonly, nonatomic) float pruningThresholdPSR;
@property (readonly, nonatomic) unsigned long long pruningNumRetentionUtterance;
@property (readonly, nonatomic) unsigned long long maxAllowedEnrollmentUtterances;
@property (readonly, nonatomic) NSString *voiceProfilePruningCookie;
@property (readonly, nonatomic) NSString *keywordDetectorNDAPIConfigFilePath;
@property (readonly, nonatomic) NSString *keywordDetectorQuasarConfigFilePath;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *hashFromResourcePath;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) unsigned long long assetProvider;

+ (id)fallBackAssetResourcePath;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2 assetProvider:(unsigned long long)a3;
+ (id)hybridEndpointerAssetFilename;
+ (id)getConfigFileNameForAssetType:(unsigned long long)a0;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForAdBlocker;

- (void).cxx_destruct;
- (id)description;
- (id)getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)a0;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)a0;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)a0;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)a0;
- (id)getStringForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)a0;
- (BOOL)containsCategory:(id)a0;
- (BOOL)containsKey:(id)a0 category:(id)a1;
- (float)VTSecondPassThresholdFrom:(id)a0;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)a0;
- (float)VTSecondPassLoggingThresholdFrom:(id)a0;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)a0;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)a0;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)a0;
- (BOOL)VTSecondPassConfigPathRecognizerExistFrom:(id)a0;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)a0;
- (BOOL)VTSecondPassUseKeywordSpottingFrom:(id)a0;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)a0;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)a0;
- (id)VTSecondPassRecognizerTokenFrom:(id)a0;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)a0;
- (float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)a0;
- (float)VTSecondPassRejectLoggingThresholdFrom:(id)a0;
- (BOOL)assetsRequireSecondPass;
- (float)VTSecondPassPHSRejectLoggingThresholdFrom:(id)a0;
- (float)VTSecondPassPHSThresholdFrom:(id)a0;
- (id)supportedVTPhrasesInfoForCategory:(id)a0;
- (id)ctcKwdToPhraseIdMapForCategory:(id)a0;
- (BOOL)isEqualAsset:(id)a0;
- (BOOL)getBoolForKey:(id)a0 category:(id)a1 default:(BOOL)a2;
- (id)initWithResourcePath:(id)a0 configFile:(id)a1 configVersion:(id)a2 assetProvderType:(unsigned long long)a3;
- (id)_decodeJson:(id)a0;
- (id)stringForCurrentAssetProviderType;
- (id)_getContinuousVoiceTriggerAssetCategory;

@end
