@class NSArray, NSString, ASRSchemaASREmojiMetrics, NSData, ASRSchemaASRRecognizerComponents;

@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char personalizedLanguageModelAgeInNs : 1; unsigned char personalizedLanguageModelWeight : 1; unsigned char averageActiveTokensPerFrame : 1; unsigned char signalToNoiseRatioInDecibels : 1; unsigned char recognitionDurationInNs : 1; unsigned char audioDurationInNs : 1; unsigned char eagerEnabled : 1; unsigned char utteranceDetectionEnabled : 1; unsigned char utteranceConcatenationEnabled : 1; unsigned char continuousListeningEnabled : 1; unsigned char eagerCustomerPerceivedLatencyInNs : 1; unsigned char cpuRealTimeFactor : 1; unsigned char numLanguageModelEnrollmentDataStreams : 1; unsigned char inverseTextNormalizationDurationInNs : 1; unsigned char inverseTextNormalizationDurationForFinalResultInNs : 1; unsigned char numberOfInverseTextNormalizationRuns : 1; unsigned char secondaryPassDurationInNs : 1; unsigned char numberOfSecondaryPassRuns : 1; unsigned char cpuInstructionsInMillionsPerSecond : 1; unsigned char appleNeuralEngineCpuTimeInNs : 1; unsigned char pageInsWaitTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long personalizedLanguageModelAgeInNs;
@property (nonatomic) BOOL hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) float personalizedLanguageModelWeight;
@property (nonatomic) BOOL hasPersonalizedLanguageModelWeight;
@property (retain, nonatomic) ASRSchemaASRRecognizerComponents *recognizerComponents;
@property (nonatomic) BOOL hasRecognizerComponents;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float signalToNoiseRatioInDecibels;
@property (nonatomic) BOOL hasSignalToNoiseRatioInDecibels;
@property (nonatomic) unsigned long long recognitionDurationInNs;
@property (nonatomic) BOOL hasRecognitionDurationInNs;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL eagerEnabled;
@property (nonatomic) BOOL hasEagerEnabled;
@property (nonatomic) BOOL utteranceDetectionEnabled;
@property (nonatomic) BOOL hasUtteranceDetectionEnabled;
@property (nonatomic) BOOL utteranceConcatenationEnabled;
@property (nonatomic) BOOL hasUtteranceConcatenationEnabled;
@property (nonatomic) BOOL continuousListeningEnabled;
@property (nonatomic) BOOL hasContinuousListeningEnabled;
@property (nonatomic) unsigned long long eagerCustomerPerceivedLatencyInNs;
@property (nonatomic) BOOL hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) float cpuRealTimeFactor;
@property (nonatomic) BOOL hasCpuRealTimeFactor;
@property (nonatomic) unsigned int numLanguageModelEnrollmentDataStreams;
@property (nonatomic) BOOL hasNumLanguageModelEnrollmentDataStreams;
@property (copy, nonatomic) NSString *phoneticMatchDecoderName;
@property (nonatomic) BOOL hasPhoneticMatchDecoderName;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationInNs;
@property (nonatomic) BOOL hasInverseTextNormalizationDurationInNs;
@property (retain, nonatomic) ASRSchemaASREmojiMetrics *emojiMetrics;
@property (nonatomic) BOOL hasEmojiMetrics;
@property (copy, nonatomic) NSArray *pausedAudioDurationsInNs;
@property (nonatomic) unsigned long long inverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) BOOL hasInverseTextNormalizationDurationForFinalResultInNs;
@property (nonatomic) unsigned int numberOfInverseTextNormalizationRuns;
@property (nonatomic) BOOL hasNumberOfInverseTextNormalizationRuns;
@property (nonatomic) unsigned long long secondaryPassDurationInNs;
@property (nonatomic) BOOL hasSecondaryPassDurationInNs;
@property (nonatomic) unsigned int numberOfSecondaryPassRuns;
@property (nonatomic) BOOL hasNumberOfSecondaryPassRuns;
@property (nonatomic) unsigned long long cpuInstructionsInMillionsPerSecond;
@property (nonatomic) BOOL hasCpuInstructionsInMillionsPerSecond;
@property (nonatomic) unsigned long long appleNeuralEngineCpuTimeInNs;
@property (nonatomic) BOOL hasAppleNeuralEngineCpuTimeInNs;
@property (nonatomic) unsigned long long pageInsWaitTimeInNs;
@property (nonatomic) BOOL hasPageInsWaitTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteSecondaryPassDurationInNs;
- (void)deleteUtteranceDetectionEnabled;
- (void)deleteNumberOfSecondaryPassRuns;
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)addPausedAudioDurationsInNs:(unsigned long long)a0;
- (void)clearLanguageModelInterpolationWeights;
- (void)clearPausedAudioDurationsInNs;
- (void)deleteAppleNeuralEngineCpuTimeInNs;
- (void)deleteAudioDurationInNs;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteContinuousListeningEnabled;
- (void)deleteCpuInstructionsInMillionsPerSecond;
- (void)deleteCpuRealTimeFactor;
- (void)deleteEagerCustomerPerceivedLatencyInNs;
- (void)deleteEagerEnabled;
- (void)deleteEmojiMetrics;
- (void)deleteInverseTextNormalizationDurationForFinalResultInNs;
- (void)deleteInverseTextNormalizationDurationInNs;
- (void)deleteLanguageModelInterpolationWeights;
- (void)deleteNumLanguageModelEnrollmentDataStreams;
- (void)deleteNumberOfInverseTextNormalizationRuns;
- (void)deletePageInsWaitTimeInNs;
- (void)deletePausedAudioDurationsInNs;
- (void)deletePersonalizedLanguageModelAgeInNs;
- (void)deletePersonalizedLanguageModelWeight;
- (void)deletePhoneticMatchDecoderName;
- (void)deleteRecognitionDurationInNs;
- (void)deleteRecognizerComponents;
- (void)deleteSignalToNoiseRatioInDecibels;
- (void)deleteUtteranceConcatenationEnabled;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (unsigned long long)pausedAudioDurationsInNsAtIndex:(unsigned long long)a0;
- (unsigned long long)pausedAudioDurationsInNsCount;

@end
