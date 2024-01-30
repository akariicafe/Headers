@class NSString, NSDictionary, NSMutableString, NSCache;
@protocol EMUserProfileProvider, EDMailboxPredictionQueryAdapter;

@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor>

@property (retain, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (retain, nonatomic) id<EDMailboxPredictionQueryAdapter> library;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSCache *mailboxIDCache;
@property (retain, nonatomic) NSMutableString *debugLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_limitToRecents;
- (id)_allowedRecipientsForMessage:(id)a0;
- (id)_conversationIDCountsForMessage:(id)a0;
- (id)_countsForField:(id)a0 message:(id)a1;
- (id)_groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (BOOL)_isAllowedRecipient:(id)a0;
- (id)_listIDCountsForMessage:(id)a0;
- (id)_mergeDefaultParameters:(id)a0 withParameters:(id)a1;
- (BOOL)_modeParameterIs:(id)a0;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)a0 withThreshold:(double)a1;
- (id)_objectWithMeasure:(double)a0 timesHigherThanFollowUpInMeasures:(id)a1;
- (id)_orderedModePredictionForMessage:(id)a0;
- (id)_predictionsForMessage:(id)a0 limit:(unsigned long long)a1;
- (id)_recipientCountsForMessage:(id)a0;
- (id)_removeSpecialMailboxesInCounts:(id)a0 message:(id)a1;
- (id)_senderCountsForMessage:(id)a0;
- (id)_summedWeightedPredictionsForMessage:(id)a0 limit:(unsigned long long)a1;
- (id)_topHitFromMailboxDictionary:(id)a0;
- (id)_topHitFromMailboxDictionary:(id)a0 message:(id)a1;
- (id)_userCreatedMailboxIDs;
- (id)_weightedModePredictionsForMessage:(id)a0;
- (id)initWithUserProfileProvider:(id)a0 queryAdapter:(id)a1;
- (id)initWithUserProfileProvider:(id)a0 queryAdapter:(id)a1 parameters:(id)a2;
- (id)predictMailboxIDsForMessages:(id)a0 limit:(unsigned long long)a1 diagnostics:(id *)a2;

@end
