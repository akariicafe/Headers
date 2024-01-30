@interface SiriNLUExternalTypesConverter : NSObject

+ (id)convertFromTask:(id)a0;
+ (id)convertFromUserParse:(id)a0;
+ (id)convertFromAsrTokenInformation:(id)a0;
+ (id)convertFromAsrHypothesis:(id)a0;
+ (id)convertFromAsrOutputs:(id)a0;
+ (id)convertFromAsrTokens:(id)a0;
+ (id)convertFromContext:(id)a0;
+ (id)convertFromDouble:(double)a0;
+ (id)convertFromEntityCandidate:(id)a0;
+ (id)convertFromEntityCandidates:(id)a0;
+ (id)convertFromMatchingSpan:(id)a0;
+ (id)convertFromMatchingSpans:(id)a0;
+ (id)convertFromNluLegacyNLContext:(id)a0;
+ (id)convertFromNluRequest:(id)a0;
+ (id)convertFromNluResponse:(id)a0;
+ (id)convertFromNluTurnContext:(id)a0;
+ (id)convertFromNluTurnInput:(id)a0;
+ (id)convertFromNumber:(id)a0;
+ (id)convertFromRRAnnotation:(id)a0;
+ (id)convertFromRRAnnotations:(id)a0;
+ (id)convertFromRRGroupIdentifer:(id)a0;
+ (id)convertFromRepetitionResult:(id)a0;
+ (id)convertFromRepetitionResults:(id)a0;
+ (id)convertFromString:(id)a0;
+ (id)convertFromTasks:(id)a0;
+ (id)convertFromUUID:(id)a0;
+ (id)convertFromUserParses:(id)a0;
+ (id)convertParser:(id)a0;
+ (id)convertfromRequestID:(id)a0;

@end
