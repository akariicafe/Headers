@class NSMutableDictionary, NSSet, NSMutableSet, WBSCloudHistoryFetchResult, NSObject;
@protocol OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol;

@interface WBSCloudHistoryMergeOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSHistoryServiceDatabaseProtocol> _database;
    WBSCloudHistoryFetchResult *_fetchResult;
    BOOL _mergeStarted;
    NSMutableDictionary *_visitsByVisitIdentifiers;
    NSMutableSet *_redirectChainEarliestVisits;
    NSSet *_tombstones;
    NSMutableDictionary *_tombstonesByURLString;
    NSSet *_existingVisits;
    NSSet *_redirectChainSourceVisits;
}

- (void).cxx_destruct;
- (void)_buildRedirectChains;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_filterVisitsByTombstones;
- (void)_loadTombstonesWithCompletion:(id /* block */)a0;
- (void)_lookUpExistingItemsWithCompletion:(id /* block */)a0;
- (void)_lookupRedirectChainSourcesWithCompletion:(id /* block */)a0;
- (void)_mergeVisitsWithCompletion:(id /* block */)a0;
- (void)_removeDuplicateVisits;
- (void)_replayAndAddTombstones:(id /* block */)a0;
- (void)_updateClientVersions;
- (id)initWithDatabase:(id)a0 fetchResult:(id)a1;
- (void)mergeWithCompletion:(id /* block */)a0;

@end
