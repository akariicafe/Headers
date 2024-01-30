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

- (id)init;
- (void).cxx_destruct;
- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)fetchFamilyCircleWithError:(id *)a0;
- (unsigned long long)_cachePolicy;

@end
