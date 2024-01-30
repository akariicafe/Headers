@class NSMutableDictionary, NSArray, NSDictionary, NSError, NSMutableArray;
@protocol FCContentContext;

@interface FCBatchedRecordChainFetchOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches;
@property (retain, nonatomic) NSMutableDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) NSError *operationError;
@property (nonatomic) unsigned long long maxBatchSize;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *topLevelRecordIDs;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType;
@property (copy, nonatomic) id /* block */ dynamicCachePolicyBlock;
@property (retain, nonatomic) NSArray *additionalRecordSources;
@property (copy, nonatomic) id /* block */ cachedRecordsLookupBlock;
@property (copy, nonatomic) id /* block */ recordChainCompletionHandler;

- (void)resetForRetry;
- (void)_continueRefreshing;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
