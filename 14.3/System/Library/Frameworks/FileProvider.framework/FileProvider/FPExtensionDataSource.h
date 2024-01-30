@class NSString, NSData, FPExtensionEnumerationSettings, NSObject;
@protocol FPCollectionDataSourceDelegate, FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource> {
    FPExtensionEnumerationSettings *_enumerationSettings;
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    BOOL _shouldUpdate;
    BOOL _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    unsigned long long _numGatheredItems;
    id<FPDLifetimeServicing> _lifetimeExtender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;

- (void)_invalidateWithError:(id)a0;
- (void)didUpdateItem:(id)a0;
- (void).cxx_destruct;
- (void)_gatherInitialItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)a0 section:(unsigned long long)a1;
- (id)_initialPageFromSortDescriptors:(id)a0;
- (void)_gatherMoreItemsAfterPage:(id)a0 section:(unsigned long long)a1;
- (void)_invalidate;
- (void)_updateItems;
- (void)enumerationResultsDidChange;
- (void)start;
- (void)invalidateWithError:(id)a0;
- (id)initWithEnumerationSettings:(id)a0;
- (void)invalidate;
- (void)enumerationMightHaveResumed;

@end
