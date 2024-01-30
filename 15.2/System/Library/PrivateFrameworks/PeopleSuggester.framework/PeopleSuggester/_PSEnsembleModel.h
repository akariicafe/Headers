@class NSDictionary, _PSSharingContactRankerModel, PPTopicStore, NSString, _PSRuleMiningModel, PPContactStore, TRITrackingId, NSArray, _PSConfidenceModelForSharing, NSUserDefaults, NSSet, _PSFTZKWTrialData, _CDInteractionCache, _PSFTZKWOrchestrator, _PSContactResolver, _PSKNNModel, _PSHeuristics, _CDInteractionStore, TRIClient, CNContactStore, _PSInteractionAndContactMonitor;
@protocol _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface _PSEnsembleModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _PSRuleMiningModel *ruleMiningModel;
@property (retain, nonatomic) _PSSharingContactRankerModel *sharingContactRankerModel;
@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing;
@property BOOL PSConfidenceModelInUse;
@property (retain, nonatomic) _PSKNNModel *knnModel;
@property (retain, nonatomic) _PSKNNModel *knnMapsModel;
@property (retain, nonatomic) _PSKNNModel *knnZkwModel;
@property (retain, nonatomic) _PSKNNModel *knnNameOrContactRankerModel;
@property (retain, nonatomic) _PSKNNModel *knnSiriNLContactRankerModel;
@property (retain, nonatomic) _PSHeuristics *heuristics;
@property (retain, nonatomic) _PSInteractionAndContactMonitor *contactMonitor;
@property (retain, nonatomic) NSSet *cachedSupportedBundleIDs;
@property (retain, nonatomic) _PSContactResolver *contactResolver;
@property (retain, nonatomic) _PSFTZKWOrchestrator *zkwFTOrchestrator;
@property (retain, nonatomic) _PSFTZKWTrialData *zkwFTTrialData;
@property (nonatomic) BOOL allowNonSupportedBundleIDs;
@property (retain) NSDictionary *psConfig;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain) TRIClient *trialClient;
@property (retain) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) id<_DKKnowledgeQuerying, _DKKnowledgeSaving> knowledgeStore;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) PPTopicStore *topicStore;
@property (retain, nonatomic) PPContactStore *portraitContactStore;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;
@property (retain, nonatomic) NSArray *groupActivityInteractionCache;
@property (retain, nonatomic) NSUserDefaults *peopleSuggesterDefaults;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSArray *defaultContactKeysToFetch;
@property (retain, nonatomic) NSString *trialID;

- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)predictWithMapsPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 interactionId:(id)a2;
- (id)rankedNameSuggestionsWithPredictionContext:(id)a0 name:(id)a1;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (id)_knnZKWSuggestionsWithPredictionContext:(id)a0 modelConfiguration:(id)a1 maxSuggestions:(unsigned long long)a2;
- (id)rankedSiriMLCRHandles:(id)a0 context:(id)a1;
- (BOOL)loadPSConfig:(id)a0;
- (id)familyPredictionsWithMaxSuggestions:(unsigned long long)a0;
- (id)fetchShareSheetSupportedBundleIDs;
- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 contactKeysToFetch:(id)a2;
- (void)loadDefaultAdaptableModelConfig;
- (id)appExtensionSuggestionsFromContext:(id)a0;
- (BOOL)excludeSuggestionWithConversationId:(id)a0;
- (void).cxx_destruct;
- (void)addUTIInfo:(id)a0 predictionContext:(id)a1;
- (void)registerWithTrial;
- (void)addSupportedBundleIDs:(id)a0;
- (id)init;
- (void)discardTrialModels;
- (void)populateCaches;
- (id)getLatestTrialMLModelVersion;
- (void)populateCachesWithSupportedBundleIDs:(id)a0;
- (void)refreshCaches;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)suggestionsFromSuggestionProxies:(id)a0 supportedBundleIDs:(id)a1 contactKeysToFetch:(id)a2 meContactIdentifier:(id)a3 maxSuggestions:(unsigned long long)a4;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)a0 contactsOnly:(BOOL)a1 maxSuggestions:(unsigned long long)a2;
- (void)addAdaptedModelUsageInfoToSuggestions:(id)a0;
- (id)mergedSuggestionsWithFamilySuggestions:(id)a0 shareSheetSuggestions:(id)a1 maxSuggestions:(unsigned long long)a2 supportedBundleIds:(id)a3;
- (void)updateTrialID:(id)a0;
- (BOOL)copyRemoteRuleMinerMLModel:(id)a0;
- (void)updateFactorLevels;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (id)mapsSuggestionArrayWithArray:(id)a0 appendingUniqueElementsFromArray:(id)a1 contactResolver:(id)a2 meContactId:(id)a3;
- (void)loadDefaultPSConfig;
- (void)discardAdaptedModel;
- (id)suggestZKWSuggestionsWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;

@end
