@class ICStoreHLSAssetInfo, NSString, MPMediaItem, NSData, BLSecureOfflineKeyDeliveryRequest, BLStoreItemMetadataRequest, ICStoreRequestContext;

@interface BLOfflineKeyRequest : ICRequestOperation {
    BLStoreItemMetadataRequest *_metadataRequest;
    ICStoreRequestContext *_requestContext;
    ICStoreHLSAssetInfo *_assetInfo;
    BLSecureOfflineKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    NSString *_identity;
    NSData *_persistentKeyData;
}

- (void)execute;
- (void)finishWithError:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_performOfflineKeyRequest;
- (id)initWithMediaItem:(id)a0 identity:(id)a1;

@end
