@class NSDictionary, NSMutableSet, NSMutableArray;

@interface _GEOPlaceDataRequestHelper : NSObject {
    id /* block */ _requestHandler;
    NSDictionary *_identifierOrderMap;
    NSMutableSet *_remaningIdentifiers;
    NSMutableArray *_results;
}

+ (id)helperForHandler:(id /* block */)a0 identifiers:(id)a1;
+ (id)helperExpiredIdentifiers:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)finishedIdentifier:(id)a0 withResult:(id)a1 error:(id)a2;
- (void)failAllRemainingRequests;

@end
