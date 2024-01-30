@class NSDictionary, NSArray;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest

@property (readonly, retain) NSDictionary *serverResponse;
@property (nonatomic) long long qualityOfService;
@property (copy) NSArray *expectedDSIDs;
@property (copy) NSArray *expectedAltDSIDs;
@property BOOL signedInAccountShouldBeApprover;
@property BOOL forceServerFetch;
@property unsigned long long cachePolicy;
@property BOOL doNotFetchFromServer;
@property BOOL promptUserToResolveAuthenticatonFailure;

- (id)fetchFamilyCircleWithError:(id *)a0;
- (id)fetchCachedFamilyCircle:(id *)a0;
- (unsigned long long)_cachePolicy;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)fetchCachedFamilyCircleWithCache:(id)a0 deviceInfo:(id)a1 error:(id *)a2;
- (id)init;
- (id)requestOptions;

@end
