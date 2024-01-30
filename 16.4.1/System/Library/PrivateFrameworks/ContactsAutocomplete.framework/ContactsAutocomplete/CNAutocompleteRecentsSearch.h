@class NSString, CRRecentContactsLibrary;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch>

@property (retain, nonatomic) CRRecentContactsLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)autocompleteResultsForRecentContacts:(id)a0 request:(id)a1;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoreRecentContactsLibrary:(id)a0;

@end
