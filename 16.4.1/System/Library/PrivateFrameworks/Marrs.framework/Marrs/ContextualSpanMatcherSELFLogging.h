@interface ContextualSpanMatcherSELFLogging : NSObject

+ (BOOL)emitEvent:(id)a0;
+ (id)createContextualSpanMatcherEndedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createContextualSpanMatcherEndedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitContextualSpanMatcherEndedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithResultCandidateId:(id)a2 andWithRequester:(int)a3;

@end
