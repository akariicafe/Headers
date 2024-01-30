@class CSSearchQuery, EKEventStore;

@interface EKSpotlightSearch : NSObject {
    CSSearchQuery *csQuery;
}

@property (weak) EKEventStore *eventStore;

+ (id)queryStringForSearchTerm:(id)a0 matchingTypes:(unsigned long long)a1 fromStartDate:(id)a2 toEndDate:(id)a3;
+ (id)_queryStringForPeopleMatchingSearchTerm:(id)a0;
+ (id)searchWithCSQuery:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (id)queryStringForSearchTerm:(id)a0 matchingTypes:(unsigned long long)a1;

- (void)cancel;
- (id)query;
- (void).cxx_destruct;
- (void)start;
- (id)initWithSearchWithCSQuery:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
