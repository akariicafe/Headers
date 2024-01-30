@class NSString, ATXExecutableReferenceManager, NSObject, ATXBiomeERMStream;
@protocol OS_dispatch_queue;

@interface ATXEngagementRecordManager : NSObject <ATXEngagementRecordManagerProtocol> {
    ATXExecutableReferenceManager *_referenceManager;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeERMStream *_eventStream;
}

@property (nonatomic) double minDurationForTrackedReferencesToStayAround;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_engagedEntriesNoSync;
- (void)updateForClientModelCacheUpdate:(id)a0 clientModelId:(id)a1;
- (id)jsonDict;
- (void)removeEngagementForSuggestion:(id)a0 recordType:(unsigned long long)a1;
- (void)_removeEngagedSuggestionsIfPossibleNoSync;
- (void)_addHiddenSuggestionNoSync:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (void)addHiddenSuggestion:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (void)_serializeAndWriteNoSyncSet:(id)a0;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagedExecutables:(id)a1;
- (void)removeEngagementForExecutableIdentifier:(id)a0 recordType:(unsigned long long)a1 abortingRemovalIfEngagementDateIsLaterThanDate:(id)a2;
- (void)_logDidAddEntryToBiomeStream:(id)a0;
- (id)initWithCacheDirectory:(id)a0;
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (id)engagedExecutablesOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (void)fetchEngagedEntriesWithCompletionHandler:(id /* block */)a0;
- (void)removeAllEngagementsWithCompletion:(id /* block */)a0;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)a0;
- (id)_readData;
- (void)addEngagedSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (id)init;
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)a0;
- (void)removeAllEngagementsForSuggestion:(id)a0;
- (id)_identifiersFromEntries:(id)a0;
- (void)_addEngagedSuggestionNoSync:(id)a0 type:(unsigned long long)a1;
- (void)_removeEngagementsOnQueuePassingTest:(id /* block */)a0;
- (BOOL)_writeData:(id)a0;
- (void).cxx_destruct;

@end
