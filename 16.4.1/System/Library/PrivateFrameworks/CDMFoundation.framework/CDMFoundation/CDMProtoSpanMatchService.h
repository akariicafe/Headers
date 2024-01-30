@class CDMSiriVocabularyProtoSpanMatcher, CDMRegexSpanMatcher, CDMVocTrieProtoSpanMatcher, CDMDateTimeProtoSpanMatcher, NSObject;
@protocol OS_dispatch_queue;

@interface CDMProtoSpanMatchService : CDMDAGBaseService {
    CDMVocTrieProtoSpanMatcher *_vocTrieSpanMatcher;
    CDMDateTimeProtoSpanMatcher *_dateTimeMatcher;
    CDMSiriVocabularyProtoSpanMatcher *_siriVocabSpanMatcher;
    CDMRegexSpanMatcher *_regexSpanMatcher;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueAsr;
    NSObject<OS_dispatch_queue> *_cdmProtoSpanMatchServiceQueueSpanMatchers;
}

+ (id)getSpanMatchers;
+ (BOOL)shouldBeUsedForAsrAlternatives:(id)a0;
+ (id)convertToSpanMatchRequests:(id)a0 nlContext:(id)a1;
+ (id)getAssetConfig;
+ (void)processAsrAlternative:(id)a0 topAsrTokenChain:(id)a1 cdmTokenChainAltAsr:(id)a2 asrMapTopAsr:(id)a3 asrMapAltAsr:(id)a4 spansTopAsr:(id)a5 asrHypothesis:(id)a6;

- (long long)getServiceState;
- (void)updateData:(id)a0;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)_handle:(id)a0;
- (id)createErrorSetupResponseCommand:(id)a0;
- (id)getDateTimeMatcher;
- (id)getRegexSpanMatcher;
- (id)getSiriVocabSpanMatcher;
- (id)getVocTrieSpanMatcher;
- (id)handleRequestCommandTypeNames;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;
- (void)limitNumberOfSpans:(id)a0;
- (int)matcherNameStringToSELFEnum:(id)a0;
- (void)postProcessSpans:(id)a0 asrSpansMap:(id)a1 asrHypothesis:(id)a2 asrMaps:(id)a3 topAsrTokenChain:(id)a4 asrMapTopAsr:(id)a5 topAsrSpansFiltered:(id)a6;
- (id)prepareSpanMatchers;
- (void)setAsrHypothesisIndexForTopAsrSpans:(id)a0;
- (void)spanizeAsr:(id)a0 tokenChain:(id)a1 spans:(id)a2 isTopAsr:(BOOL)a3 topAsrSpansFiltered:(id)a4 selfMetadata:(id)a5;
- (void)spanizeAsrs:(id)a0 spanMatchers:(id)a1 asrSpansMap:(id)a2 topAsrSpans:(id)a3 topAsrSpansFiltered:(id)a4 selfMetadata:(id)a5;

@end
