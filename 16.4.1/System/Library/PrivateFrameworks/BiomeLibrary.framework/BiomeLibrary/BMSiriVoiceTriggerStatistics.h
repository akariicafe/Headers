@class NSString, NSDate;

@interface BMSiriVoiceTriggerStatistics : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) double firstPassPeakScoreHS;
@property (nonatomic) BOOL hasFirstPassPeakScoreHS;
@property (readonly, nonatomic) double firstPassPeakScoreJS;
@property (nonatomic) BOOL hasFirstPassPeakScoreJS;
@property (readonly, nonatomic) int firstPassTriggerSource;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (readonly, nonatomic) double recognizerScoreHS;
@property (nonatomic) BOOL hasRecognizerScoreHS;
@property (readonly, nonatomic) double recognizerScoreJS;
@property (nonatomic) BOOL hasRecognizerScoreJS;
@property (readonly, nonatomic) double triggerScoreHS;
@property (nonatomic) BOOL hasTriggerScoreHS;
@property (readonly, nonatomic) double triggerScoreJS;
@property (nonatomic) BOOL hasTriggerScoreJS;
@property (readonly, nonatomic) double mitigationScore;
@property (nonatomic) BOOL hasMitigationScore;
@property (readonly, nonatomic) int invocationTypeID;
@property (nonatomic) BOOL hasInvocationTypeID;
@property (readonly, nonatomic) double repetitionSimilarityScore;
@property (nonatomic) BOOL hasRepetitionSimilarityScore;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (readonly, nonatomic) double hwSampleRate;
@property (nonatomic) BOOL hasHwSampleRate;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) double keywordThresholdHS;
@property (nonatomic) BOOL hasKeywordThresholdHS;
@property (readonly, nonatomic) double keywordThresholdJS;
@property (nonatomic) BOOL hasKeywordThresholdJS;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdHS;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdJS;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithAbsoluteTimestamp:(id)a0 firstPassPeakScoreHS:(id)a1 firstPassPeakScoreJS:(id)a2 firstPassTriggerSource:(id)a3 recognizerScoreHS:(id)a4 recognizerScoreJS:(id)a5 triggerScoreHS:(id)a6 triggerScoreJS:(id)a7 mitigationScore:(id)a8 invocationTypeID:(id)a9 repetitionSimilarityScore:(id)a10 tdSpeakerRecognizerCombinedScore:(id)a11 hwSampleRate:(id)a12 configVersion:(id)a13 keywordThresholdHS:(id)a14 keywordThresholdJS:(id)a15 tdSpeakerRecognizerCombinedThresholdHS:(id)a16 tdSpeakerRecognizerCombinedThresholdJS:(id)a17;

@end
