@class NSString, NSDictionary, TIInputMode, NSArray, NSNumber;

@interface TIKeyboardInputManagerConfig : NSObject

@property (retain, nonatomic) TIInputMode *inputMode;
@property (copy, nonatomic) NSString *staticDictionaryPath;
@property (copy, nonatomic) NSString *dynamicResourcePath;
@property (copy, nonatomic) NSString *ngramModelPath;
@property (copy, nonatomic) NSString *shapeStoreResourceDir;
@property (nonatomic) BOOL allowsSpaceCorrections;
@property (nonatomic) BOOL usesTextChecker;
@property (nonatomic) BOOL usesRetrocorrection;
@property (nonatomic) BOOL usesWordNgramModel;
@property (nonatomic) BOOL usesAdaptation;
@property (nonatomic) BOOL usesWordNgramModelAdaptation;
@property (nonatomic) unsigned long long maxWordsPerPrediction;
@property (nonatomic) BOOL completionsShouldSharePrefix;
@property (nonatomic) BOOL usesStemSuffixCorrectionFactor;
@property (nonatomic) BOOL languageAllowsCP;
@property (nonatomic) BOOL usesContinuousPath;
@property (copy, nonatomic) NSDictionary *continuousPathParams;
@property (copy, nonatomic) NSArray *continuousPathEnsembleSourceWeights;
@property (copy, nonatomic) NSArray *continuousPathEnsembleSourceScales;
@property (nonatomic) BOOL usesContinuousPathProgressiveCandidates;
@property (nonatomic) double continuousPathLanguageWeight;
@property (nonatomic) BOOL continuousPathDeleteWholeWord;
@property (nonatomic) BOOL continuousPathDetectPause;
@property (nonatomic) BOOL continuousPathCompletesWords;
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput;
@property (nonatomic) int continuousPathEnabledAlgorithms;
@property (nonatomic) BOOL usesContinuousPathRetrocorrection;
@property (nonatomic) BOOL shouldIgnoreCPRequirements;
@property (nonatomic) int cpConfidenceModelType;
@property (nonatomic) long long cpCandidatesCount;
@property (nonatomic) BOOL includeLightWeightLanguageModelMobileAssets;
@property (nonatomic) BOOL usesCJContinuousPath;
@property (nonatomic, getter=isTesting) BOOL testing;
@property (nonatomic) BOOL skipLanguageLayoutCheckCPML;
@property (nonatomic) BOOL usesCustomNgramModel;
@property (nonatomic) BOOL usesCustomStaticDictionary;
@property (copy, nonatomic) NSNumber *favoniusLanguageModelWeight;
@property (nonatomic) BOOL usesDODMLLogging;
@property (nonatomic) BOOL sensorKitEnabled;
@property (nonatomic) unsigned long long sensorKitWordsThreshold;
@property (nonatomic) BOOL allowRelaxedOVSPolicy;
@property (nonatomic) BOOL usesUserModelLogging;
@property (nonatomic) BOOL skipCandidateQualityFilter;
@property (nonatomic) BOOL disableAnalytics;

+ (id)configurationForInputMode:(id)a0;

- (id)propertyList;
- (void).cxx_destruct;

@end
