@class FBSServiceFacilityClient;

@interface SSUIServiceClient : NSObject {
    FBSServiceFacilityClient *_facilityClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
