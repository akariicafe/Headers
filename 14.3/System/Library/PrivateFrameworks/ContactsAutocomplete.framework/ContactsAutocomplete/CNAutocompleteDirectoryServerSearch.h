@class CNContactStore, NSString;

@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchContactsForFetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)autocompleteResultsForContacts:(id)a0 request:(id)a1;

@end
