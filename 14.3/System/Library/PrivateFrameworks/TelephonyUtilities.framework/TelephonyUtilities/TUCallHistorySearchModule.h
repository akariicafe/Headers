@class NSString, TUSearchResults, TUSearchController, NSMutableArray;

@interface TUCallHistorySearchModule : NSObject <TUSearchModuleProtocol>

@property (retain, nonatomic) NSMutableArray *currentResultsList;
@property (copy, nonatomic) NSString *previousSearchString;
@property (nonatomic, getter=isSearchComplete) BOOL searchComplete;
@property (readonly) TUSearchResults *searchResults;
@property (weak) TUSearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelSearch;
- (void).cxx_destruct;
- (void)searchForString:(id)a0 completion:(id /* block */)a1;

@end
