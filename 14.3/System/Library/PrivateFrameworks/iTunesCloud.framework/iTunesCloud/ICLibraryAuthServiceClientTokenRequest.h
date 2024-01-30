@class ICStoreRequestContext, ICLibraryAuthServiceClientTokenResponse;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
