@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    BOOL _includeKeybagSyncData;
    id _parsedResponse;
}

- (void)execute;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)cancel;
- (id)initWithRequestContext:(id)a0 buyParameters:(id)a1 includeKeybagSyncData:(BOOL)a2;
- (id)initWithRequestContext:(id)a0 buyParametersString:(id)a1 includeKeybagSyncData:(BOOL)a2;

@end
