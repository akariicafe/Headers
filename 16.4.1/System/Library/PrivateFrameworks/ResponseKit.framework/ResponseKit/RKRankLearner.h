@interface RKRankLearner : NSObject

- (id)init;
- (void)flushRankingData:(id)a0;
- (id)getDBManager:(id)a0;
- (id)getDBManager:(id)a0 withCustomPath:(id)a1;
- (id)getRankedResponses:(id)a0 forRecipientID:(id)a1 withLanguageID:(id)a2;
- (BOOL)insertRankingInfo:(id)a0 forLanguageID:(id)a1;
- (id)rankResponses:(id)a0;
- (id)updateFeaturesForResponse:(id)a0 selectCounts:(id)a1 inputMethodCounts:(id)a2 sourceCounts:(id)a3 currentTime:(id)a4 languageCode:(id)a5;

@end
