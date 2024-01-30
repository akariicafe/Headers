@class EFPromise, NSString, CNAutocompleteFetchContext, CNAutocompleteStore, EFCancelationToken;

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation <CNAutocompleteFetchDelegate> {
    EFCancelationToken *_fetchRequestToken;
    EFPromise *_fetchRequestPromise;
}

@property (nonatomic) BOOL includeContacts;
@property (nonatomic) BOOL includeRecents;
@property (nonatomic) BOOL includeSuggestions;
@property (nonatomic) BOOL includeServers;
@property (nonatomic) BOOL simulateResults;
@property (copy, nonatomic) CNAutocompleteFetchContext *fetchContext;
@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithOwner:(id)a0 text:(id)a1 taskID:(id)a2 autocompleteStore:(id)a3;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)_simulatedRecipientResults;
- (void)configureForSearchTypes:(unsigned long long)a0;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;

@end
