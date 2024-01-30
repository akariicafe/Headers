@class NSArray, NSDictionary, FCHeldRecords, FCEdgeCacheHint, NSMutableSet, NSMutableArray;
@protocol FCContentContext;

@interface FCRecordChainFetchOperation : FCOperation {
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    NSDictionary *_pbRecordTypesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSMutableSet *_actualTopLevelRecordIDs;
    NSMutableSet *_skippedTopLevelRecordIDs;
    NSMutableSet *_missingCachedOnlyTopLevelRecordIDs;
    NSDictionary *_resultHeldRecordsByType;
    NSMutableArray *_mutableNetworkEvents;
}

@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *topLevelRecordIDs;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType;
@property (copy, nonatomic) id /* block */ dynamicCachePolicyBlock;
@property (nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing;
@property (nonatomic) BOOL shouldFailOnLimitExceededError;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (retain, nonatomic) NSArray *additionalRecordSources;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (copy, nonatomic) id /* block */ cachedRecordsLookupBlock;
@property (copy, nonatomic) id /* block */ recordChainCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
