@class MDSearchQuery, NSString, NSMutableOrderedSet;

@interface CalSpotlightPendingSearch : NSObject <MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSMutableOrderedSet *searchableItemIdentifiers;
@property (retain) NSMutableOrderedSet *searchableItems;
@property (retain) MDSearchQuery *query;
@property (copy) NSString *clientBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queue;
+ (id)_createSearchQueryWithPredicate:(id)a0 options:(id)a1;
+ (id)_pendingSearches;
+ (id)_resultForSearchableItem:(id)a0;
+ (id)_resultsForSearchableItems:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (void)searchQuery:(id)a0 didFailWithError:(id)a1;
- (void)searchQuery:(id)a0 didReturnItems:(id)a1;
- (void)searchQuery:(id)a0 statusChanged:(unsigned long long)a1;
- (void)_searchEnded;
- (void)_startSearchWithQuery:(id)a0;
- (id)initWithString:(id)a0 clientBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchWithString:(id)a0;

@end
