@class _CDInteractionCache, PPTopicStore, NSDictionary, _PSHeuristics, _CDInteractionStore, PPContactStore, _PSContactResolver, TRIClient, NSSet, _PSRuleMiningModel, TRITrackingId, NSString, _PSKNNModel, NSUserDefaults, CNContactStore, NSArray, _PSInteractionAndContactMonitor;
@protocol _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface _PSEnsembleModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _PSRuleMiningModel *ruleMiningModel;
@property (retain, nonatomic) _PSKNNModel *knnModel;
@property (retain, nonatomic) _PSKNNModel *knnMapsModel;
@property (retain, nonatomic) _PSKNNModel *knnZkwModel;
@property (retain, nonatomic) _PSKNNModel *knnNameOrContactRankerModel;
@property (retain, nonatomic) _PSKNNModel *knnSiriNLContactRankerModel;
@property (retain, nonatomic) _PSHeuristics *heuristics;
@property (retain, nonatomic) _PSInteractionAndContactMonitor *contactMonitor;
@property (retain, nonatomic) NSSet *cachedSupportedBundleIDs;
@property (retain, nonatomic) _PSContactResolver *contactResolver;
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
@property (retain, nonatomic) NSUserDefaults *peopleSuggesterDefaults;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSArray *defaultContactKeysToFetch;
@property (retain, nonatomic) NSString *trialID;

- (id)fetchShareSheetSupportedBundleIDs;
- (id)appExtensionSuggestionsFromContext:(id)a0;
- (id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 interactionId:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (BOOL)copyRemoteRuleMinerMLModel:(id)a0;
- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 contactKeysToFetch:(id)a2;
- (void)addAdaptedModelUsageInfoToSuggestions:(id)a0;
- (id)mapsSuggestionArrayWithArray:(id)a0 appendingUniqueElementsFromArray:(id)a1 contactResolver:(id)a2 meContactId:(id)a3;
- (void)discardAdaptedModel;
- (id)suggestZKWMessagesSuggestionsWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)mergedSuggestionsWithFamilySuggestions:(id)a0 shareSheetSuggestions:(id)a1 maxSuggestions:(unsigned long long)a2 supportedBundleIds:(id)a3;
- (id)suggestionsFromSuggestionProxies:(id)a0 supportedBundleIDs:(id)a1 contactKeysToFetch:(id)a2 meContactIdentifier:(id)a3 maxSuggestions:(unsigned long long)a4;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (void)updateTrialID:(id)a0;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)a0 contactsOnly:(BOOL)a1 maxSuggestions:(unsigned long long)a2;
- (void)loadDefaultPSConfig;
- (id)rankedSiriMLCRHandles:(id)a0 context:(id)a1;
- (void)updateFactorLevels;
- (void)loadDefaultAdaptableModelConfig;
- (id)getLatestTrialMLModelVersion;
- (void)discardTrialModels;
- (void)addUTIInfo:(id)a0 predictionContext:(id)a1;
- (id)predictWithMapsPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (id)rankedNameSuggestionsWithPredictionContext:(id)a0 name:(id)a1;
- (void)registerWithTrial;
- (BOOL)loadPSConfig:(id)a0;
- (void)addSupportedBundleIDs:(id)a0;
- (void)populateCaches;
- (id)familyPredictionsWithMaxSuggestions:(unsigned long long)a0;
- (void)populateCachesWithSupportedBundleIDs:(id)a0;

@end
