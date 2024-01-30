@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    BOOL _isEnabled;
    BOOL _canSubscribe;
    BOOL _isSubscriber;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
