@interface CDMPostProcessUtils : NSObject

+ (id)getFederatedParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 parsesUaaP:(id)a3 parsesPSC:(id)a4 parsesAutoShortcuts:(id)a5 parsesAppendOverrides:(id)a6 parsesSSU:(id)a7 addDebugInfo:(id)a8;
+ (void)addNormalizedValuesTo:(id)a0 alignedWith:(id)a1 from:(id)a2;
+ (void)annotateDUDAWithMRRRewrittenUtterance:(id)a0 matchingSpans:(id)a1 userDialogAct:(id)a2;
+ (void)annotateDelegatedUDAParses:(id)a0 matchingSpans:(id)a1 mrRewrittenUtterance:(id)a2;
+ (void)annotateNLUResponse:(id)a0 nluRequest:(id)a1 matchingSpans:(id)a2 tokenChain:(id)a3;
+ (void)annotateParses:(id)a0 tokenChain:(id)a1 matchingSpans:(id)a2 asrHypothesis:(id)a3;
+ (void)annotateUserParses:(id)a0 ccqrCorrectionOutcome:(id)a1 nlv4Parses:(id)a2 overrideParses:(id)a3;
+ (void)copyASRTimingInfoToUtteranceSpan:(id)a0 startIndexTokenDict:(id)a1 endIndexTokenDict:(id)a2;
+ (void)copyAlignedSpanIdentifierForSameType:(id)a0 spanIndexDict:(id)a1 utteranceAlignment:(id)a2 entityKey:(id)a3 groupIndexDict:(id)a4 locale:(id)a5;
+ (void)copyMentionResolverSpanIdentifiers:(id)a0 fromMatchingSpans:(id)a1 toParseGraph:(id)a2;
+ (void)createIdentifierGroups:(id)a0 spans:(id)a1 parseEntityKey:(id)a2 parseAlignment:(id)a3 interpretationGroupCurrentMax:(id)a4;
+ (id)entityKeyFrom:(id)a0 at:(unsigned long long)a1;
+ (id)filterAndConvertInternalMatchingSpan:(id)a0;
+ (id)filterAndConvertInternalMatchingSpans:(id)a0;
+ (id)getAlignedIdentifierSpans:(id)a0;
+ (id)getCroppedUserParses:(id)a0;
+ (id)getGroupIndexDict:(id)a0;
+ (id)getPostProcessUserParses:(id)a0;
+ (id)getPostProcessUserParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 addDebugInfo:(id)a3;
+ (id)getPostProcessUserParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 parsesUaaP:(id)a3 addDebugInfo:(id)a4;
+ (id)getPostProcessUserParses:(id)a0 parsesNLv4:(id)a1 parsesCATI:(id)a2 parsesUaaP:(id)a3 parsesPSC:(id)a4 parsesAutoShortcuts:(id)a5 parsesAppendOverrides:(id)a6 parsesSSU:(id)a7 addDebugInfo:(id)a8;
+ (BOOL)hasEntityEdgeTo:(int)a0 inGraph:(id)a1;
+ (BOOL)hasTagNamespace:(id)a0;
+ (unsigned char)isExternalMatchingSpan:(id)a0 fromMatcher:(int)a1;
+ (unsigned char)isInternalMatchingSpan:(id)a0 fromMatcher:(int)a1;
+ (void)logParsesRanking:(id)a0 addDebugInfo:(id)a1;
+ (id)normalizedPayloadsFrom:(long long)a0 to:(long long)a1 within:(id)a2;
+ (void)populateComparableProbabilityForParsesNLv4:(id)a0 parsesSNLC:(id)a1;
+ (void)populateComparableProbabilityFromProbabilityParses:(id)a0;
+ (void)populateComparableProbabilityParses:(id)a0 threshold:(float)a1;
+ (void)populateComparableProbabilityParsesAutoShortcuts:(id)a0;
+ (void)populateComparableProbabilityParsesCATI:(id)a0;
+ (void)populateComparableProbabilityParsesPSC:(id)a0;
+ (void)populateComparableProbabilityParsesSNLC:(id)a0 deviceParses:(id)a1;
+ (void)populateComparableProbabilityParsesSSU:(id)a0;
+ (void)populateComparableProbabilityParsesUaaP:(id)a0;
+ (void)runFeatureStore:(id)a0 nluResponse:(id)a1 snlcRequest:(id)a2 snlcResponse:(id)a3 pscRequest:(id)a4 pscResponse:(id)a5 spanProtoResponse:(id)a6 tokenProtoResponse:(id)a7 mdRequest:(id)a8 mdResponse:(id)a9 mrRequest:(id)a10 mrResponse:(id)a11 nLv4Request:(id)a12 nLv4Response:(id)a13;
+ (id)runPostProcess:(id)a0 snlcRequest:(id)a1 snlcResponse:(id)a2 nLv4Request:(id)a3 nLv4Response:(id)a4 uaapNLProtoResponse:(id)a5 catiProtoResponse:(id)a6 pscRequest:(id)a7 pscResponse:(id)a8 lvcResponse:(id)a9 overridesProtoResponse:(id)a10 mdRequest:(id)a11 mdResponse:(id)a12 mrRequest:(id)a13 mrResponse:(id)a14 spanProtoResponse:(id)a15 rdResponse:(id)a16 tokenProtoResponse:(id)a17 ssuResponse:(id)a18 correctionOutcome:(id)a19 nluRequest:(id)a20 graphInput:(id)a21 debugText:(id)a22;
+ (id)selectParsesFromUserParsesUaaP:(id)a0 userParsesShortcut:(id)a1 userParsesReplaceOverrides:(id)a2 userParsesAppendOverrides:(id)a3 userParsesSNLC:(id)a4 userParsesNLv4:(id)a5 userParsesCATI:(id)a6 userParsesPSC:(id)a7 userParsesAutoShortcuts:(id)a8 userParsesSSU:(id)a9 addDebugInfo:(id)a10;
+ (BOOL)skipAddingSpanIdentifier:(id)a0 span:(id)a1 locale:(id)a2;
+ (id)sortParses:(id)a0;
+ (id)spanIndexDict:(id)a0;
+ (void)splitParses:(id)a0 deviceParses:(id)a1 zeroParses:(id)a2;
+ (void)stripBugFixNamespaceSuffix:(id)a0;
+ (id)usoGraphs:(id)a0;

@end
