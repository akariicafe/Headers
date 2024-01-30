@class ICStoreRequestContext, ICLibraryAuthServiceClientTokenResponse;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void)execute;
- (id)initWithStoreRequestContext:(id)a0;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
