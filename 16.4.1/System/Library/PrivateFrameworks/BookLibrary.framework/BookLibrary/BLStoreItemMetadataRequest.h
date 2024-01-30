@class ICStoreMediaResponseItem, MPMediaItem, ICBuyProductRequest, ICStoreRequestContext;

@interface BLStoreItemMetadataRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_performBuyProductRequest;
- (id)_responseDictionaryForKeyCertificateURL:(id)a0 keyServerURL:(id)a1;
- (id)initWithRequestContext:(id)a0 mediaItem:(id)a1;

@end
