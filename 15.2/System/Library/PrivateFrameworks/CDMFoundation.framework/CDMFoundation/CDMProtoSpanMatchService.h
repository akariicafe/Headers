@class CDMContextProtoSpanMatcher, CDMSiriVocabularyProtoSpanMatcher, CDMRegexSpanMatcher, CDMVocTrieProtoSpanMatcher, CDMDateTimeProtoSpanMatcher, NSObject;
@protocol OS_dispatch_queue;

@interface CDMProtoSpanMatchService : CDMDAGBaseService {
    CDMVocTrieProtoSpanMatcher *_vocTrieSpanMatcher;
    CDMDateTimeProtoSpanMatcher *_dateTimeMatcher;
    CDMSiriVocabularyProtoSpanMatcher *_siriVocabSpanMatcher;
    CDMContextProtoSpanMatcher *_contextSpanMatcher;
    CDMRegexSpanMatcher *_regexSpanMatcher;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueAsr;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueSpanMatchers;
}

+ (id)convertToSpanMatchRequests:(id)a0 nlContext:(id)a1;
+ (id)getSpanMatchers;
+ (BOOL)shouldBeUsedForAsrAlternatives:(id)a0;
+ (void)processAsrAlternative:(id)a0 topAsrTokenChain:(id)a1 cdmTokenChainAltAsr:(id)a2 asrMapTopAsr:(id)a3 asrMapAltAsr:(id)a4 spansTopAsr:(id)a5 asrHypothesis:(id)a6;

- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;
- (long long)getServiceState;
- (id)_handle:(id)a0;
- (void)_updateData:(id)a0;
- (id)getSiriVocabSpanMatcher;
- (id)getVocTrieSpanMatcher;
- (id)getDateTimeMatcher;
- (id)getRegexSpanMatcher;
- (id)prepareSpanMatchers;
- (id)getContextSpanMatcher;
- (void)spanizeAsrs:(id)a0 spanMatchers:(id)a1 asrSpansMap:(id)a2 topAsrSpans:(id)a3 topAsrSpansFiltered:(id)a4;
- (void)postProcessSpans:(id)a0 asrSpansMap:(id)a1 asrHypothesis:(id)a2 asrMaps:(id)a3 topAsrTokenChain:(id)a4 asrMapTopAsr:(id)a5 topAsrSpansFiltered:(id)a6;
- (void)limitNumberOfSpans:(id)a0;
- (id)createErrorSetupResponseCommand:(id)a0;
- (void)spanizeAsr:(id)a0 tokenChain:(id)a1 spans:(id)a2 isTopAsr:(BOOL)a3 topAsrSpansFiltered:(id)a4;

@end
