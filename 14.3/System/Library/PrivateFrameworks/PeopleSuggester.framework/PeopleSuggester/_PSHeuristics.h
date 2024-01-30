@class _PSContactResolver, _CDInteractionCache, _CDInteractionStore;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic) double recencyMargin;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;

+ (id)templateForPhoneCallHeuristicWithContactId:(id)a0 handle:(id)a1 reason:(id)a2;

- (void)prepareRecencyCacheWithSupportedBundleIds:(id)a0;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)a0 photoSuggestedPeople:(id)a1 contactIDsInAssets:(id)a2;
- (void).cxx_destruct;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 shareSheetSupportedBundleIds:(id)a3;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)a0 numberOfSuggestion:(unsigned long long)a1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2;
- (id)backFillProxiesByRecencyUsingInteractions:(id)a0 startIndex:(unsigned long long)a1;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)a0 predictionContextBundleId:(id)a1;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)a0;
- (id)inPhoneCallHeuristicSuggestionProxies;
- (void)updateModelProperties:(id)a0;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)a0 bundleIds:(id)a1 meContactIdentifier:(id)a2;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)a0 existingSuggestions:(id)a1;

@end
