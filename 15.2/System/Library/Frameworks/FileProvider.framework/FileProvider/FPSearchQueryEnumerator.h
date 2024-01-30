@class NSString, NSFileProviderSearchQuery, CSSearchQuery;

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderSearchQuery *_fileProviderSearchQuery;
    NSString *_mountPoint;
    CSSearchQuery *_searchQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (void)_gatherItemsWithCompletionBlock:(id /* block */)a0;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:(id)a0;
- (id)initWithSearchQuery:(id)a0 mountPoint:(id)a1;

@end
