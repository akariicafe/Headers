@interface CDMMentionResolverServiceUtils : NSObject

+ (id)buildMRRequestWithCurTurn:(id)a0 tokenChain:(id)a1 matchingSpans:(id)a2 mdResponse:(id)a3 contextualSpanMatcherResponse:(id)a4 embedding:(id)a5 utterance:(id)a6 turnIndex:(unsigned long long)a7 nluRequestId:(id)a8 resultCandidateId:(id)a9 cdmRequestId:(id)a10;
+ (id)includeWhitespaceInIndices:(id)a0 tokenchain:(id)a1;
+ (void)logMRRequestToFile:(id)a0;
+ (void)logMRResponseToFile:(id)a0;

@end
