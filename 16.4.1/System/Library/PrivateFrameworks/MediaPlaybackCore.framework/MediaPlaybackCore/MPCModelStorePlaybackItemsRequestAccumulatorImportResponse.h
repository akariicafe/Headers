@class MPServerObjectDatabaseImportResult;

@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject

@property (readonly, copy, nonatomic) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL didFinishEntireRequest; BOOL didFinishPrioritizedBatch; BOOL hasCollectionItemsWithPlaybackAuthorizationToken; BOOL hasPrioritizedItemsToLoad; } accumulatorImportResult;

- (void).cxx_destruct;
- (id)initWitDatabaseImportResult:(id)a0 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1;

@end
