@class PSGExperimentResolver, NSString, _PASBundleIdResolver, PSGInputSuggesterMetricsLogger;
@protocol PSGInputSuggesterProtocol;

@interface PSGInputSuggesterServerRequestHandler : NSObject <PSGInputSuggesterProtocol> {
    id<PSGInputSuggesterProtocol> _clientProxy;
    PSGExperimentResolver *_experimentResolver;
    PSGInputSuggesterMetricsLogger *_metricsLogger;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)setRemoteObjectProxy:(id)a0;
- (void)_logRequest:(id)a0 config:(id)a1;
- (id)_quickResponsesForResponseContext:(id)a0 conversationTurns:(id)a1 localeIdentifier:(id)a2 maxResponses:(unsigned long long)a3 recipients:(id)a4 chunkPath:(id)a5 plistPath:(id)a6 espressoBinFilePath:(id)a7;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (id)init;
- (id)_quickTypeTriggerForContext:(id)a0 localeIdentifier:(id)a1 modelConfigPath:(id)a2 espressoBinFilePath:(id)a3;
- (void).cxx_destruct;
- (void)inputSuggestionsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithExperimentResolver:(id)a0 metricsLogger:(id)a1;
- (id)_wordBoundaryResponseForRequest:(id)a0 config:(id)a1;
- (void)logPrediction:(id)a0 request:(id)a1 latencyMillis:(double)a2;
- (void)logImpression:(id)a0 request:(id)a1;
- (void)logSpeedMetricForLocaleIdentifier:(id)a0 messageDurationMilliseconds:(int)a1 messageLength:(int)a2 messageWords:(int)a3;
- (void)logErrorForRequest:(id)a0 trigger:(id)a1 errorType:(unsigned char)a2;
- (void)logEngagement:(id)a0 request:(id)a1 position:(unsigned long long)a2;
- (id)_getExperimentConfigForLogging:(id)a0;
- (id)_zkwResponseForRequest:(id)a0 config:(id)a1;
- (void)logTrigger:(id)a0 request:(id)a1;

@end
