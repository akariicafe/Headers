@class NSString, ATXExecutableReferenceManager, NSObject, ATXBiomeERMStream;
@protocol OS_dispatch_queue;

@interface ATXEngagementRecordManager : NSObject {
    ATXExecutableReferenceManager *_referenceManager;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeERMStream *_eventStream;
}

@property (nonatomic) double minDurationForTrackedReferencesToStayAround;

+ (id)sharedInstance;

- (id)_readData;
- (id)jsonDict;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_writeData:(id)a0;
- (id)initWithCacheDirectory:(id)a0;
- (id)engagedExecutablesOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagedExecutables:(id)a1;
- (id)_engagedEntriesNoSync;
- (void)_removeEngagedSuggestionsIfPossibleNoSync;
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)a0;
- (id)_identifiersFromEntries:(id)a0;
- (void)_addEngagedSuggestionNoSync:(id)a0 type:(unsigned long long)a1;
- (void)_addHiddenSuggestionNoSync:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (void)_serializeAndWriteNoSyncSet:(id)a0;
- (void)_removeEngagementsOnQueuePassingTest:(id /* block */)a0;
- (void)_logDidAddEntryToBiomeStream:(id)a0;
- (void)updateForClientModelCacheUpdate:(id)a0 clientModelId:(id)a1;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (void)addEngagedSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (void)addHiddenSuggestion:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (void)removeEngagementForSuggestion:(id)a0 recordType:(unsigned long long)a1;
- (void)removeAllEngagementsForSuggestion:(id)a0;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)a0;
- (void)removeEngagementForExecutableIdentifier:(id)a0 recordType:(unsigned long long)a1 abortingRemovalIfEngagementDateIsLaterThanDate:(id)a2;
- (void)removeAllEngagementsWithCompletion:(id /* block */)a0;
- (void)_fetchEngagedEntriesWithCompletionHandler:(id /* block */)a0;

@end
