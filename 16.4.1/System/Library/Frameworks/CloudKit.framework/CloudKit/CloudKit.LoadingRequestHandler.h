@interface CloudKit.LoadingRequestHandler : NSObject <AVAssetResourceLoaderDelegate> {
    void /* unknown type, empty encoding */ assetStreamHandle;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ taskByRequest;
}

- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)resourceLoader:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForRenewalOfRequestedResource:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForResponseToAuthenticationChallenge:(id)a1;

@end
