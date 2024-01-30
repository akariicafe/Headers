@class ICStoreURLRequest, ICMediaRedownloadResponse, ICMusicRestoreRequestParameters, ICStoreRequestContext;

@interface ICMusicRestoreRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMediaRedownloadResponse *_response;
    ICMusicRestoreRequestParameters *_requestParameters;
}

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (id)_serializedBodyDataWithAccountID:(id)a0;
- (id)initWithRequestContext:(id)a0 parameters:(id)a1;
- (void)performRestoreRequestWithCompletionHandler:(id /* block */)a0;

@end
