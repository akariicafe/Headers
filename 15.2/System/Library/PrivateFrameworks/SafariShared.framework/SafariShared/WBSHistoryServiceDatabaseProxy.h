@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseProxy : NSObject <WBSHistoryServiceDatabaseProtocol> {
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDatabaseURL:(id /* block */)a0;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)a0;
- (void)createTagsForIdentifiers:(id)a0 withTitles:(id)a1 type:(unsigned long long)a2 level:(long long)a3 completionHandler:(id /* block */)a4;
- (void)addAutocompleteTrigger:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTitle:(id)a0 ofTagWithID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)a0 completionHandler:(id /* block */)a1;
- (void)markEventsAsReceivedByListener:(id)a0 eventIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)expireOldVisits:(double)a0 completionHandler:(id /* block */)a1;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 tombstoneMode:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)updateVisitWithIdentifier:(id)a0 removeAttributes:(unsigned long long)a1 addAttributes:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)fetchMetadataForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateVisitWithIdentifier:(id)a0 title:(id)a1 completionHandler:(id /* block */)a2;
- (void)performMaintenanceWithAgeLimit:(double)a0 itemCountLimit:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchWithOptions:(unsigned long long)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)a0 completionHandler:(id /* block */)a1;
- (void)recomputeItemScoresWithCompletionHandler:(id /* block */)a0;
- (void)visitIdentifiersMatchingExistingVisits:(id)a0 completionHandler:(id /* block */)a1;
- (void)searchForUserTypedString:(id)a0 options:(unsigned long long)a1 currentTime:(double)a2 writeHandle:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchCloudClientVersionTable:(id /* block */)a0;
- (void)fetchEventsForListener:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDomainExpansions:(id /* block */)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)a0 lastSyncedGeneration:(long long)a1 completionHandler:(id /* block */)a2;
- (void)recordVisitWithIdentifier:(id)a0 sourceVisit:(id)a1 title:(id)a2 wasHTTPNonGet:(BOOL)a3 loadSuccessful:(BOOL)a4 origin:(long long)a5 attributes:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (void)assignHistoryItemWithID:(long long)a0 toTopicTagsWithIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearHistoryItems:(id)a0 afterDate:(id)a1 beforeDate:(id)a2 tombstoneMode:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)a0 beforeDate:(id)a1 onlyFromThisDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)replayAndAddTombstones:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLastSeenDate:(id)a0 forCloudClientVersion:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)a0;
- (void)fetchAllTombstonesWithCompletionHandler:(id /* block */)a0;
- (id)initWithProxy:(id)a0;
- (void)close;
- (void)computeFrequentlyVisitedSites:(unsigned long long)a0 minimalVisitCountScore:(unsigned long long)a1 disallowList:(id)a2 allowList:(id)a3 options:(unsigned long long)a4 currentTime:(double)a5 completionHandler:(id /* block */)a6;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isOpen;
- (void)fetchAutocompleteTriggersForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)a0 listenersToIgnore:(id)a1 persistForDelayedDispatching:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)updateWithType:(unsigned long long)a0 addOrModifyObjects:(id)a1 updateCurrentGeneration:(id)a2 updateLastSyncGeneration:(id)a3 updateLastMaintenance:(id)a4 completionHandler:(id /* block */)a5;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;

@end
