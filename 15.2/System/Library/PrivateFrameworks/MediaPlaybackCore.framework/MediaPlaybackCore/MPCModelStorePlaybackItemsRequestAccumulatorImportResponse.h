@class MPServerObjectDatabaseImportResult;

@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject

@property (readonly, copy, nonatomic) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL didFinishEntireRequest; BOOL didFinishBatch; BOOL hasCollectionItemsWithPlaybackAuthorizationToken; } accumulatorImportResult;

- (void).cxx_destruct;
- (id)initWitDatabaseImportResult:(id)a0 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; })a1;

@end
