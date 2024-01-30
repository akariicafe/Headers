@class FPExtensionDataSource, FPSpotlightDataSource, NSObject, FPSearchQueryDescriptor;
@protocol OS_dispatch_queue, FPSpotlightDataSourceDelegate;

@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    FPSpotlightDataSource *_spotlightDataSource;
    FPExtensionDataSource *_serverSearchDataSource;
}

@property (readonly, nonatomic) FPSearchQueryDescriptor *queryDescriptor;
@property (weak, nonatomic) id<FPSpotlightDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (readonly) unsigned long long lastForcedUpdate;

- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dataSource:(id)a0 didChangeItemsOrigin:(unsigned long long)a1;
- (void)dataSource:(id)a0 receivedUpdatedItems:(id)a1 deletedItems:(id)a2 hasMoreChanges:(BOOL)a3;
- (void)dataSource:(id)a0 replaceContentsWithItems:(id)a1 hasMoreChanges:(BOOL)a2;
- (void)dataSource:(id)a0 wasInvalidatedWithError:(id)a1;
- (BOOL)dataSourceShouldAlwaysReplaceContents:(id)a0;
- (void)enumerationMightHaveResumed;
- (id)initWithQueryDescriptor:(id)a0 predicate:(id)a1;

@end
