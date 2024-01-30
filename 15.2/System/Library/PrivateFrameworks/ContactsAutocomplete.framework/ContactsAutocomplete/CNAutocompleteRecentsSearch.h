@class NSString, CRRecentContactsLibrary;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch>

@property (retain, nonatomic) CRRecentContactsLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoreRecentContactsLibrary:(id)a0;
- (id)autocompleteResultsForRecentContacts:(id)a0 request:(id)a1;

@end
