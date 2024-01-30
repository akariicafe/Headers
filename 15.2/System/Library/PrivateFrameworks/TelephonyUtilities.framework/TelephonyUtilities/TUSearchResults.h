@class NSString, NSArray, TUSearchController, NSMutableArray;

@interface TUSearchResults : NSObject <NSCopying>

@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSMutableArray *resultGroups;
@property (retain, nonatomic) NSMutableArray *allSearchItemsCache;
@property (retain, nonatomic) NSMutableArray *allDataItemsCache;
@property (readonly) NSArray *allSearchItems;
@property (readonly) NSArray *allDataItems;
@property (readonly) long long numberOfSections;
@property (readonly) long long numberOfResults;
@property (weak) TUSearchController *searchController;

- (void)addSearchResults:(id)a0;
- (id)description;
- (void)_clearCaches;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addResultGroup:(id)a0;
- (void)addAdhocResultGroup;
- (void)removeDuplicateResults;
- (void)removeSearchItem:(id)a0;
- (id)resultGroupForSection:(long long)a0;
- (id)initWithSearchTerm:(id)a0 shouldAddAdhocResults:(BOOL)a1;
- (void)finalizeSearchResults;
- (long long)numberOfTableViewRows;

@end
