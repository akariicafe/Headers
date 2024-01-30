@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    BOOL _includeKeybagSyncData;
    id _parsedResponse;
}

- (void)cancel;
- (id)initWithRequestContext:(id)a0 buyParametersString:(id)a1 includeKeybagSyncData:(BOOL)a2;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 buyParameters:(id)a1 includeKeybagSyncData:(BOOL)a2;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
