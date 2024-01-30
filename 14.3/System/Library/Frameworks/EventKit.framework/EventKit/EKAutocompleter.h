@class EKSource, NSString, NSSet, EKDirectorySearchOperation, CNAutocompleteStore, NSMutableArray, NSOperationQueue;
@protocol EKAutocompleterDelegate, CNCancelable;

@interface EKAutocompleter : NSObject <CNAutocompleteFetchDelegate>

@property (weak) id<EKAutocompleterDelegate> delegate;
@property (copy) NSString *prefix;
@property (retain) EKSource *source;
@property (retain) NSSet *addressesToIgnore;
@property (retain) NSMutableArray *contactResults;
@property (retain) id<CNCancelable> autocompletionSearchRequest;
@property BOOL autocompleteRunning;
@property (retain) CNAutocompleteStore *autocompleteStore;
@property (retain) EKDirectorySearchOperation *directorySearchOperation;
@property (retain) NSOperationQueue *directorySearchQueue;
@property (retain) NSMutableArray *directorySearchResults;
@property (nonatomic) BOOL findRooms;
@property (nonatomic) BOOL findPeople;
@property (nonatomic) BOOL findSuggestions;
@property (nonatomic) BOOL findResources;
@property (nonatomic) BOOL findGroups;
@property (nonatomic) BOOL findRecents;
@property (nonatomic) BOOL useACDirectorySearch;
@property (nonatomic) BOOL excludeLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelSearch;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)lastSearchString;
- (id)initWithDelegate:(id)a0;
- (id)cnResults;
- (id)allResults;
- (void)clearLastResults;
- (id)removeIgnoredAddressesFromResults:(id)a0;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (id)searchFor:(id)a0 onSource:(id)a1 withContext:(id)a2;
- (void)setIgnoredParticipants:(id)a0;
- (void)setIgnoredAddresses:(id)a0;

@end
