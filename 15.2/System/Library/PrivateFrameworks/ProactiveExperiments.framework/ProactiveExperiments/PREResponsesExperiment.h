@class PREResponsesGeneratedEvent, RKMessageResponseManager, _PASLRUCache, NSObject;
@protocol PREExperimentResolverProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;

@interface PREResponsesExperiment : NSObject {
    NSObject<PREExperimentResolverProtocol> *_experimentResolver;
    NSObject<PREResponsesMetricsProtocol> *_metrics;
    NSObject<PREResponsesProtocol> *_xpcClient;
    RKMessageResponseManager *_rkClient;
    _PASLRUCache *_responsesGeneratedCache;
    PREResponsesGeneratedEvent *_cachedResponsesGeneratedEvent;
}

@property (nonatomic) BOOL registerDisplayed;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipients:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipients:(id)a6 options:(unsigned long long)a7;
- (void)primeResponsesExperimentsIfNeeded;
- (id)initWithExperimentResolver:(id)a0 metricsClient:(id)a1 xpcClient:(id)a2 rkClient:(id)a3;
- (id)clippedMessageIfNecessary:(id)a0;
- (id)cacheKeyForMessage:(id)a0 maxResponses:(unsigned long long)a1 time:(id)a2 language:(id)a3;
- (id)activeExperimentNameForLanguage:(id)a0;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (void)preResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (void)registerResponse:(id)a0 forMessage:(id)a1 time:(id)a2 metadata:(id)a3 withLanguage:(id)a4;
- (void)registerResponseDisplayedAtIndex:(id)a0;
- (id)responsesCache;
- (void)registerGenerationWithPreResponseItems:(id)a0 language:(id)a1 isCached:(BOOL)a2 responseTimePerf:(unsigned long long)a3 promptMessage:(id)a4 generationStatus:(int)a5;
- (id)waitForPreResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7;
- (id)stringArrayFromConversationTurns:(id)a0;
- (id)stringArrayFromPreResponseItems:(id)a0;
- (id)handlesFromRecipients:(id)a0;
- (BOOL)shouldUseDefaultRKTreatment;
- (BOOL)shouldUseDefaultRKTreatmentForLanguage:(id)a0;
- (id)inputMethodStringFrom:(int)a0;
- (int)preInputMethodFrom:(id)a0;
- (BOOL)isStringEmpty:(id)a0;

@end
