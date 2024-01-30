@class NSDictionary;

@interface VTAnalyzerNDAPI : NSObject {
    void *_novDetect;
    NSDictionary *_decodedInfo;
}

- (const struct _ndsupervec { float *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)getSuperVectorWithEndPoint:(unsigned int)a0;
- (void)resetBest;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (const struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)getAnalyzedResult;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (int)getSATVectorCount;
- (void)updateSAT;
- (const char *)_getOptionValueFromConfigurationName:(id)a0;
- (double)_getFloatValueFromConfigurationName:(id)a0 defaultTo:(double)a1;
- (int)_getIntValueFromConfigurationName:(id)a0 defaultTo:(int)a1;
- (id)_getStringValueFromConfigurationName:(id)a0 defaultTo:(id)a1;
- (double)getThresholdSAT;
- (id)_getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)_decodeJson:(id)a0;
- (double)getRetrainThresholdTrigger;
- (double)getRetrainExplicitUttThresholdSAT;
- (double)getRetrainExplicitUttThresholdTDSR;
- (double)getRetrainThresholdSAT;
- (double)getRetrainThresholdTDSR;
- (int)getVoiceProfilePruningNumRetentionUtterances;
- (BOOL)initializeSAT:(id)a0;
- (id)getVoiceProfilePruningCookie;
- (const struct _ndsvscore { float x0; } *)analyzeSAT:(const float *)a0 size:(unsigned int)a1;
- (void)analyzeWavData:(const short *)a0 length:(int)a1;
- (const struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)getAnalyzedResult:(unsigned int)a0;
- (BOOL)_getBooleanValueFromConfigurationName:(id)a0 defaultTo:(BOOL)a1;
- (const struct _ndsvscore { float x0; } *)getScoreSuperVector:(const float *)a0 size:(unsigned int)a1;
- (void)deleteVectorIndex:(int)a0;
- (double)getCombinedTriggerThreshold;
- (double)getNDAPITriggerThreshold;
- (double)getCombinedSecondChanceThreshold;
- (double)getNDAPISecondChanceThreshold;
- (double)getCombinedLoggingThreshold;
- (double)getNDAPILoggingThreshold;
- (double)getExtraSamplesAtStart;
- (double)getSecondPassTrailingTime;
- (BOOL)getDoSupervectorSecondaryTest;
- (double)getThresholdPresuperVector;
- (BOOL)getDoSAT;
- (int)getRetrainNumExplicitUtt;
- (int)getRetrainNumImplicitUtt;
- (id)getRetrainSamplingPolicy;
- (int)getMaximumSpeakerVectors;
- (int)getPayloadUtteranceLifeTimeInDays;
- (BOOL)getUseRecognizer;
- (id)getRecognizerConfig;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (double)getRecognizerScoreScaleFactor;
- (id)getTriggerTokens;
- (BOOL)getUseFallbackThresholdUponTimeout;
- (BOOL)getUseKeywordSpotting;

@end
