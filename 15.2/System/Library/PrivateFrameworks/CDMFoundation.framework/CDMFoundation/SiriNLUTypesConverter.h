@interface SiriNLUTypesConverter : NSObject

+ (id)convertUserParses:(id)a0;
+ (id)convertUUID:(id)a0;
+ (id)convertRequestID:(id)a0;
+ (id)convertTurnInput:(id)a0;
+ (id)convertTurnInputs:(id)a0;
+ (id)convertRepetitionResults:(id)a0;
+ (id)convertResponseStatus:(id)a0;
+ (id)convertAsrOutputs:(id)a0;
+ (id)convertTurnContext:(id)a0;
+ (id)convertAsrTokens:(id)a0;
+ (id)convertAsrHypothesis:(id)a0;
+ (id)convertAsrTokenInformation:(id)a0;
+ (id)convertTask:(id)a0;
+ (id)convertEntityCandidate:(id)a0;
+ (id)convertRepetitionResult:(id)a0;
+ (id)convertParser:(id)a0;
+ (id)convertUserParse:(id)a0;
+ (id)convertNLContext:(id)a0;
+ (id)convertLegacyNLContext:(id)a0;
+ (id)convertTasks:(id)a0;
+ (id)convertEntityCandidates:(id)a0;
+ (id)convertRequest:(id)a0;
+ (id)convertResponse:(id)a0;
+ (void)convertRewrittenUtterance:(id)a0;

@end
