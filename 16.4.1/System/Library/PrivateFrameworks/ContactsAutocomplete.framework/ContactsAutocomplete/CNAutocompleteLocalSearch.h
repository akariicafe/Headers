@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactStore *contactFetcherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIncludeGroupResultsForRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)groupsForRequest:(id)a0 contactStore:(id)a1 contactFetcherStore:(id)a2;
- (id)initWithContactStore:(id)a0 contactFetcherStore:(id)a1;
- (id)peopleForRequest:(id)a0 contactStore:(id)a1 contactFetcherStore:(id)a2;

@end
