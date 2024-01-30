@class CNContactStore, CNAutocompleteFetchRequest, NSString;
@protocol CNAutocompleteLocalQueryDelegate;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {
    id<CNAutocompleteLocalQueryDelegate> _delegate;
}

@property (retain) CNAutocompleteFetchRequest *request;
@property (retain) CNContactStore *contactStore;
@property (retain) CNContactStore *contactFetcherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWithDelegate:(id)a0;
+ (id)peopleQuery;
+ (id)groupsQuery;

- (void)cancel;
- (id)run;
- (void).cxx_destruct;
- (id)fetchResults;
- (id)searchableProperties;
- (id)makeResultFactory;
- (id)autocompleteResultsForFetchResults:(id)a0 resultFactory:(id)a1;

@end
