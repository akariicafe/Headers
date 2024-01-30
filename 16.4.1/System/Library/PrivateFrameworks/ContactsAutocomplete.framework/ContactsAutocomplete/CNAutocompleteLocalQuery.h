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
+ (id)groupsQuery;
+ (id)peopleQuery;

- (id)run;
- (id)fetchResults;
- (void)cancel;
- (void).cxx_destruct;
- (id)autocompleteResultsForFetchResults:(id)a0 resultFactory:(id)a1;
- (id)makeResultFactory;
- (id)searchableProperties;

@end
