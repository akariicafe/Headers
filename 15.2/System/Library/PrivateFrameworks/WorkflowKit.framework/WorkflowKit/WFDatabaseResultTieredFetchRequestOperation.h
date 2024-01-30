@class NSArray;

@interface WFDatabaseResultTieredFetchRequestOperation : WFDatabaseResultFetchOperation

@property (readonly, nonatomic) NSArray *fetchRequests;
@property (readonly, nonatomic) long long resultsLimit;

- (id)entity;
- (id)description;
- (void).cxx_destruct;
- (id)resultsWithContext:(id)a0 error:(id *)a1;
- (long long)countWithContext:(id)a0 error:(id *)a1;
- (id)initWithFetchRequests:(id)a0 resultsLimit:(long long)a1;

@end
