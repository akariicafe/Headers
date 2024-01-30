@interface CDMPostProcessUtils : NSObject

+ (id)getPostProcessUserParses:(id)a0;
+ (id)getPostProcessUserParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 parsesUaaP:(id)a3 addDebugInfo:(id)a4;
+ (void)annotateNLUResponse:(id)a0 nluRequest:(id)a1 matchingSpans:(id)a2 tokenChain:(id)a3;
+ (void)convertAgentToPerson:(id)a0;
+ (id)entityKeyFrom:(id)a0 at:(unsigned long long)a1;
+ (id)normalizedPayloadsFrom:(long long)a0 to:(long long)a1 within:(id)a2;
+ (id)usoGraphs:(id)a0;
+ (id)spanIndexDict:(id)a0;
+ (void)addNormalizedValuesTo:(id)a0 alignedWith:(id)a1 from:(id)a2;
+ (void)copyASRTimingInfoToUtteranceSpan:(id)a0 startIndexTokenDict:(id)a1 endIndexTokenDict:(id)a2;
+ (void)copyAlignedSpanIdentifierForSameType:(id)a0 spanIndexDict:(id)a1 utteranceAlignment:(id)a2 entityKey:(id)a3;
+ (void)annotateParses:(id)a0 tokenChain:(id)a1 matchingSpans:(id)a2 asrHypothesis:(id)a3;
+ (id)getCalibratedParsesThreshold:(id)a0 threshold:(float)a1;
+ (id)getCalibratedParsesSNLC:(id)a0;
+ (id)getCalibratedParsesNLv4:(id)a0 parsesSNLC:(id)a1;
+ (void)splitCalibratedParses:(id)a0 deviceParses:(id)a1 zeroParses:(id)a2;
+ (id)getCalibratedParsesCATI:(id)a0;
+ (id)getCalibratedParsesUaaP:(id)a0;
+ (id)sortPseudoParses:(id)a0;
+ (void)logPseudoParsesRanking:(id)a0 addDebugInfo:(id)a1;
+ (id)getOutputUserParses:(id)a0;
+ (id)getCroppedUserParses:(id)a0;
+ (id)getFederatedParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 parsesUaaP:(id)a3 addDebugInfo:(id)a4;
+ (id)getPostProcessUserParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 addDebugInfo:(id)a3;

@end
