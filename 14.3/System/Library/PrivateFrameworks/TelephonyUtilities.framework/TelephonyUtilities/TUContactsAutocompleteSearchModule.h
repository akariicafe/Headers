@class TUSearchController, NSString, TUAutocompleteResultPartitioner, CNAutocompleteStore, NSObject, TUSearchResults;
@protocol OS_dispatch_queue, CNCancelable;

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol>

@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (retain, nonatomic) id<CNCancelable> fetchRequest;
@property (retain, nonatomic) TUAutocompleteResultPartitioner *autocompleteResultPartitioner;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic, getter=isSearchComplete) BOOL searchComplete;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) TUSearchResults *searchResults;
@property (weak) TUSearchController *searchController;

- (void)cancelSearch;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)searchForString:(id)a0 completion:(id /* block */)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;

@end
