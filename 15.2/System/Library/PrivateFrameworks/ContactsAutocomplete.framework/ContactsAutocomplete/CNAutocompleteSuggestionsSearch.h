@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)charactersThreshold;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)init;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)suggestedContactsForRequest:(id)a0 error:(id *)a1;
- (id)convertContacts:(id)a0 request:(id)a1;
- (id /* block */)resultTransformWithRequest:(id)a0;
- (id /* block */)resultTransformWithFactory:(id)a0 properties:(id)a1;

@end
