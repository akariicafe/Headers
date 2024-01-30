@class ICStoreMediaResponseItem, MPMediaItem, ICBuyProductRequest, ICStoreRequestContext;

@interface BLStoreItemMetadataRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}

- (void).cxx_destruct;
- (void)execute;
- (void)_performBuyProductRequest;
- (id)_responseDictionaryForKeyCertificateURL:(id)a0 keyServerURL:(id)a1;
- (id)initWithRequestContext:(id)a0 mediaItem:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
