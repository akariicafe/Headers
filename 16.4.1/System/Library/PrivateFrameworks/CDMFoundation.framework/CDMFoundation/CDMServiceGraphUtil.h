@interface CDMServiceGraphUtil : NSObject

+ (void)addDebugInfo:(id)a0 nluRequest:(id)a1 responseObject:(id)a2;
+ (id)adjustProtoMatchingSpans:(id)a0 tokenChain:(id)a1 outError:(id *)a2;
+ (id)appendMarrsSpans:(id)a0 marrsMRSpans:(id)a1;
+ (id)buildLVCRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 rewriteMsg:(id)a4 nluRequestId:(id)a5 reformedTurnInput:(id)a6 error:(id *)a7;
+ (id)buildNLv4ProtoRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 currentTurn:(id)a4 requestId:(id)a5 outError:(id *)a6;
+ (id)buildNormalizedUtterance:(id)a0;
+ (id)buildPSCRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 rewriteMsg:(id)a4 nluRequestId:(id)a5 currentTurn:(id)a6 error:(id *)a7;
+ (id)buildRepetitionResult:(id)a0;
+ (id)buildSNLCProtoRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 rewriteMsg:(id)a4 requestId:(id)a5 currentTurn:(id)a6 error:(id *)a7;
+ (BOOL)debugInfoEnabled:(id)a0;
+ (id)embeddingsOutput:(id)a0 embeddingConfig:(id)a1 forFactor:(id)a2;
+ (id)extractPrevTurnsAsrConfidence:(id)a0;
+ (id)extractReferenceResolutionUtterances:(id)a0;
+ (id)extractStableEmbeddings:(id)a0;
+ (id)filterMatchingSpans:(id)a0 withMatcherName:(int)a1;
+ (id)getNonWhitespaceTokenChain:(id)a0;
+ (id)overrideInputsFromUtterance:(id)a0 matchingSpans:(id)a1 tokenChain:(id)a2 contextUpdateReformedTurnInputBundle:(id)a3;
+ (id)prepareCcqrServiceRequest:(id)a0 currentTurnAsrConf:(double)a1 tokenResponse:(id)a2 previousTurnsAsrConf:(id)a3 previousTurnTokenizationResponseCommand:(id)a4 nluRequestId:(id)a5 resultCandidateId:(id)a6 cdmRequestId:(id)a7;
+ (id)prepareCcqrTokens:(id)a0 currentTurn:(id)a1 previousTurns:(id)a2 utterance:(id)a3 locale:(id)a4;
+ (id)runCcqrService:(id)a0 nluRequest:(id)a1 tokenResponse:(id)a2 previousTurnTokenizationResponseCommand:(id)a3 requestLink:(id)a4 locale:(id)a5;
+ (BOOL)runUaaPNLProtoService:(id)a0 requestId:(id)a1 utterance:(id)a2 locale:(id)a3 tokenChain:(id)a4 matchingSpans:(id)a5 embeddingTensor:(id)a6 currentTurn:(id)a7 outUaapProtoRequest:(id *)a8 outUaapProtoResponse:(id *)a9 outError:(id *)a10;
+ (BOOL)spanHasMatcherName:(int)a0 matchingSpan:(id)a1;

@end
