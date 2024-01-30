@class NSArray, NSDictionary, FCHeldRecords, NSMutableSet, NSMutableArray, FCEdgeCacheHint;
@protocol FCContentContext;

@interface FCRecordChainFetchOperation : FCOperation

@property (retain, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType;
@property (retain, nonatomic) NSDictionary *pbRecordTypesByRecordType;
@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSMutableSet *actualTopLevelRecordIDs;
@property (retain, nonatomic) NSMutableSet *skippedTopLevelRecordIDs;
@property (retain, nonatomic) NSMutableSet *missingCachedOnlyTopLevelRecordIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) NSMutableArray *mutableNetworkEvents;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *topLevelRecordIDs;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType;
@property (copy, nonatomic) id /* block */ dynamicCachePolicyBlock;
@property (nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (retain, nonatomic) NSArray *additionalRecordSources;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (copy, nonatomic) id /* block */ cachedRecordsLookupBlock;
@property (copy, nonatomic) id /* block */ recordChainCompletionHandler;

- (void)prepareOperation;
- (id)_recordTypeForRecordID:(id)a0;
- (id)_recordIDsMissingFromCachedRecords;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)_filterOrphansFromCachedRecords;
- (void)_collectCachedRecordsFromRecordIDs:(id)a0;
- (id)_partialFetchErrorForMissingRecordName:(id)a0;
- (id)_errorForMissingRecordNames:(id)a0;
- (void)_issueCloudRequestIfNeeded;
- (void)performOperation;
- (void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)a0 visitedRecordIDs:(id)a1;
- (void)_walkRecordChainStartingWithRecordIDs:(id)a0 visitedRecordIDs:(id)a1 recordsLookupBlock:(id /* block */)a2 visitorBlock:(id /* block */)a3;
- (id)_partialUncachedErrorForMissingRecordName:(id)a0;
- (void)_finalizeResultFromCachedRecords;
- (void)operationWillFinishWithError:(id)a0;
- (id)_recordSourceForRecordType:(id)a0;
- (int)_pbRecordTypeForRecordType:(id)a0;
- (int)_pbRecordTypeForRecordID:(id)a0;

@end
