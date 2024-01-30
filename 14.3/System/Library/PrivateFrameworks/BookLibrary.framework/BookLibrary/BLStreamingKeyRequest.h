@class ICSecureKeyDeliveryRequest, MPMediaItem, AVAssetResourceLoadingRequest, BLStoreItemMetadataRequest;

@interface BLStreamingKeyRequest : ICRequestOperation {
    BLStoreItemMetadataRequest *_metadataRequest;
    ICSecureKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

- (void).cxx_destruct;
- (void)execute;
- (void)_performStreamingKeyRequestForHLSAsset:(id)a0;
- (id)initWithMediaItem:(id)a0 loadingRequest:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
