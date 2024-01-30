@class FBSServiceFacilityClient;

@interface SSUIServiceClient : NSObject {
    FBSServiceFacilityClient *_facilityClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
