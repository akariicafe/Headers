@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_downloadIdentifier;
    unsigned long long _songID;
    ICStoreURLRequest *_storeURLRequest;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 downloadIdentifier:(id)a1 songID:(unsigned long long)a2;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
