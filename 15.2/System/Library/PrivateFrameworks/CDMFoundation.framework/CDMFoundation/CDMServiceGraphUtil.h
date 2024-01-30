@interface CDMServiceGraphUtil : NSObject

+ (void)addDebugInfo:(id)a0 nluRequest:(id)a1 responseObject:(id)a2;
+ (BOOL)runUaaPNLService:(id)a0 requestId:(id)a1 utterance:(id)a2 locale:(id)a3 tokenResponse:(id)a4 embeddingResponse:(id)a5 plumResponse:(id)a6 outUaaPNLResponse:(id *)a7 contextUpdateResponse:(id)a8 outError:(id *)a9;
+ (id)buildSNLCProtoRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 rewrittenUtterances:(id)a4 requestId:(id)a5 currentTurn:(id)a6 error:(id *)a7;
+ (id)buildNLv4ProtoRequestWithTokenChain:(id)a0 matchingSpans:(id)a1 utterance:(id)a2 embeddingTensor:(id)a3 currentTurn:(id)a4 requestId:(id)a5 outError:(id *)a6;
+ (id)overrideInputsFromUtterance:(id)a0 matchingSpans:(id)a1 tokenChain:(id)a2 contextUpdateReformedTurnInputBundle:(id)a3;
+ (id)buildRepetitionResult:(id)a0;
+ (BOOL)debugInfoEnabled:(id)a0;
+ (BOOL)prepareCcqrTokens:(id)a0 currentTurn:(id)a1 previousTurns:(id)a2 utterance:(id)a3 locale:(id)a4 outPreviousTurnTokenResponses:(id *)a5 outPreviousSiriResponseTokenResponses:(id *)a6;
+ (id)prepareCcqrServiceRequest:(id)a0 tokenResponse:(id)a1 previousTurnTokenResponses:(id)a2 previousSiriResponseTokenResponses:(id)a3 nluRequestId:(id)a4 resultCandidateId:(id)a5;
+ (id)buildNormalizedUtterance:(id)a0;
+ (id)adjustProtoMatchingSpans:(id)a0 tokenChain:(id)a1 outError:(id *)a2;
+ (id)extractReferenceResolutionUtterances:(id)a0;

@end
