@class _PSContactResolver, _CDInteractionCache, _CDInteractionStore;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic) double recencyMargin;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) _CDInteractionCache *messageInteractionCache;

+ (id)templateForPhoneCallHeuristicWithContactId:(id)a0 handle:(id)a1 reason:(id)a2;
+ (id)templateForPhoneCallHeuristicWithHandles:(id)a0 reason:(id)a1;

- (id)proximityBoostingHeuristicWithProximityBooster:(id)a0 existingSuggestions:(id)a1;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)a0 bundleIds:(id)a1 meContactIdentifier:(id)a2;
- (void)updateModelProperties:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)a0 numberOfSuggestion:(unsigned long long)a1;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 messageInteractionCache:(id)a3;
- (void).cxx_destruct;
- (id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)a0;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 shareSheetSupportedBundleIds:(id)a3 messageInteractionCache:(id)a4;
- (id)backFillProxiesByRecencyUsingInteractions:(id)a0 startIndex:(unsigned long long)a1;
- (void)prepareRecencyCacheWithSupportedBundleIds:(id)a0;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)a0;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)a0 predictionContextBundleId:(id)a1;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)a0 photoSuggestedPeople:(id)a1 contactIDsInAssets:(id)a2;
- (id)inExpanseSessionHeuristicSuggestionProxiesWithBundleIds:(id)a0 suggestionDate:(id)a1;

@end
