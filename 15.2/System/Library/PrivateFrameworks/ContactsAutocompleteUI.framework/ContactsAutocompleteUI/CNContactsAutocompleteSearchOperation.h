@class CNAutocompleteStore, CNPromise, NSString, CNAutocompleteFetchContext, NSNumber, CNCancelationToken;

@interface CNContactsAutocompleteSearchOperation : CNAutocompleteSearchOperation <CNAutocompleteFetchDelegate>

@property (retain, nonatomic) CNCancelationToken *fetchRequestToken;
@property (retain, nonatomic) CNPromise *fetchRequestPromise;
@property (nonatomic) BOOL includeContacts;
@property (nonatomic) BOOL includeRecents;
@property (nonatomic) BOOL includeSuggestions;
@property (nonatomic) BOOL includeServers;
@property (retain, nonatomic) NSNumber *shouldIncludeGroupResults;
@property (nonatomic) BOOL shouldUnifyResults;
@property (nonatomic) BOOL simulateResults;
@property (copy, nonatomic) CNAutocompleteFetchContext *fetchContext;
@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithOwner:(id)a0 text:(id)a1 taskID:(id)a2 autocompleteStore:(id)a3;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (BOOL)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (id)_simulatedRecipientResults;
- (id)originContextForResult:(id)a0;
- (id)unifyRecipientsIfNeccesary:(id)a0;
- (id)unifyingIdentifierForRecipient:(id)a0;
- (void)configureForSearchTypes:(unsigned long long)a0;

@end
