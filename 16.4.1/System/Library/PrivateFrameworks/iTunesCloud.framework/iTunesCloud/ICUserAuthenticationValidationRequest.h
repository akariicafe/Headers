@class ICStoreRequestContext;

@interface ICUserAuthenticationValidationRequest : NSObject {
    ICStoreRequestContext *_requestContext;
}

- (id)initWithRequestContext:(id)a0;
- (id)initWithUserIdentity:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
