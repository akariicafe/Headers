@class NSDictionary, NSString, NSArray;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest

@property (readonly, retain) NSDictionary *serverResponse;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *context;
@property (copy) NSArray *expectedDSIDs;
@property (copy) NSArray *expectedAltDSIDs;
@property BOOL signedInAccountShouldBeApprover;
@property BOOL forceServerFetch;
@property unsigned long long cachePolicy;
@property BOOL doNotFetchFromServer;
@property BOOL promptUserToResolveAuthenticatonFailure;

- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)fetchCachedFamilyCircleWithCache:(id)a0 deviceInfo:(id)a1 error:(id *)a2;
- (id)fetchFamilyCircleWithError:(id *)a0;
- (id)init;
- (id)fetchCachedFamilyCircle:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)_cachePolicy;

@end
