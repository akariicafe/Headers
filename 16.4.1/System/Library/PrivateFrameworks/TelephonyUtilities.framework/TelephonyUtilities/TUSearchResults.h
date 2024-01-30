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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)_clearCaches;
- (void).cxx_destruct;
- (void)addSearchResults:(id)a0;
- (void)addResultGroup:(id)a0;
- (void)addAdhocResultGroup;
- (void)finalizeSearchResults;
- (id)initWithSearchTerm:(id)a0 shouldAddAdhocResults:(BOOL)a1;
- (long long)numberOfTableViewRows;
- (void)removeDuplicateResults;
- (void)removeSearchItem:(id)a0;
- (id)resultGroupForSection:(long long)a0;

@end
