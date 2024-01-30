@class ICStoreMediaResponseItem, MPMediaItem, ICBuyProductRequest, ICStoreRequestContext;

@interface BLStoreItemMetadataRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}

- (void)execute;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 mediaItem:(id)a1;
- (void)_performBuyProductRequest;
- (id)_responseDictionaryForKeyCertificateURL:(id)a0 keyServerURL:(id)a1;

@end
