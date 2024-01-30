@class NSArray, _CDInteractionStore, _PSContactResolver, _CDInteractionCache;
@protocol _DKKnowledgeQuerying;

@interface _PSKNNModel : NSObject

@property (nonatomic) unsigned long long _PSKnnTopKShares;
@property (nonatomic) unsigned long long _PSKnnMessagesZkwTopNFilter;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteShares;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainShares;
@property (readonly, nonatomic) unsigned long long k;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) NSArray *filterBundleIds;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;

- (id)mergedSuggestionsFromShares:(id)a0 andInteractions:(id)a1;
- (id)rankedAutocompleteSuggestionsWithPredictionContext:(id)a0 candidates:(id)a1;
- (id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)a0 bundleId:(id)a1 candidates:(id)a2;
- (void).cxx_destruct;
- (id)featuresFromInteractions:(id)a0;
- (id)normalizedScoresForInputDictionary:(id)a0;
- (id)filterShareInteractions:(id)a0 minimumOccurences:(unsigned long long)a1;
- (id)suggestionProxiesWithPredictionContext:(id)a0;
- (id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)a0 bundleId:(id)a1 maxSuggestions:(unsigned long long)a2 frequencyOnly:(BOOL)a3 interactions:(id)a4;
- (id)indexesOfObjectsWithKey:(id)a0 withValues:(id)a1 inArray:(id)a2;
- (id)normalizedStringFromString:(id)a0;
- (long long)suggestionExists:(id)a0 withValue:(id)a1 inArray:(id)a2;
- (id)interactionLabelsForQueryResult:(id)a0 queryPoint:(id)a1 rankerType:(long long)a2 frequencyOnly:(BOOL)a3 contactsOnly:(BOOL)a4;
- (id)softmaxAppliedOnScoresForInputDictionary:(id)a0;
- (id)featuresFromMapsFeedbackEvents:(id)a0;
- (id)rankedNameSuggestionsWithPredictionContext:(id)a0 forName:(id)a1;
- (id)rankedLabelsFromInteractionsSiriNLWithInteractions:(id)a0 andDistances:(id)a1 freqOnly:(BOOL)a2;
- (id)extractNearestNeighborLabelsForQueryResult:(id)a0 andNeighbors:(id)a1 frequencyOnly:(BOOL)a2 rankerType:(long long)a3 contactsOnly:(BOOL)a4;
- (id)featureVectorFromPredictionDate:(id)a0 bundleId:(id)a1;
- (id)rankedSiriMLCRHandles:(id)a0 context:(id)a1;
- (id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)a0 andDistances:(id)a1 freqOnly:(BOOL)a2;
- (id)neighborsFromTrainingData:(id)a0 k:(unsigned long long)a1 queryPoint:(id)a2;
- (id)candidatePropertyFromCandidates:(id)a0;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 contactsOnly:(BOOL)a2 interactions:(id)a3 contactIdsCurrentlyInStore:(id)a4;
- (id)targetBundleIdsForFilterBundlesIds:(id)a0;
- (id)extractNearestNeighborsForMapsQueryResult:(id)a0 andNeighbors:(id)a1 frequencyOnly:(BOOL)a2;
- (id)initWithK:(unsigned long long)a0 interactionStore:(id)a1 filterByBundleIds:(id)a2 knowledgeStore:(id)a3 contactResolver:(id)a4 messageInteractionCache:(id)a5 shareInteractionCache:(id)a6;
- (id)mapsShareEtaDefaultKnnSuggestions:(id)a0 maxSuggestions:(unsigned long long)a1;
- (void)updateModelProperties:(id)a0;
- (id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (id)filterSuggestionsFrom:(id)a0 byFilteringOutSeedRecipients:(id)a1;
- (id)featuresFromInteractionsSplitRecipients:(id)a0;
- (id)rankedZkwSuggestionsWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)sliceStart:(unsigned long long)a0 end:(unsigned long long)a1 ofArray:(id)a2;
- (unsigned long long)indexToInsertNeighbor:(id)a0 array:(id)a1;
- (id)rankedLabelsFromInteractionsSingleRecipientArray:(id)a0 andDistances:(id)a1 freqOnly:(BOOL)a2 contactsOnly:(BOOL)a3 scoreLikeShareSheet:(BOOL)a4;
- (id)splitShareLabels:(id)a0 suggestionDate:(id)a1 contextBundleId:(id)a2;
- (id)rankedMapsShareEtaSuggestions:(id)a0 maxSuggestions:(unsigned long long)a1;

@end
