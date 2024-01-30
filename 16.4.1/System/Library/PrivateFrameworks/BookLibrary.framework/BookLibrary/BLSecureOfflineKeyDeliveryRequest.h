@class NSData, NSString, AVContentKeySession, NSURL, _BLAcquireSlotRequest, AVContentKeyRequest, AVPersistableContentKeyRequest, NSObject, ICStoreRequestContext, MPMediaItem;
@protocol OS_dispatch_queue;

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate> {
    AVContentKeySession *_keySession;
    NSObject<OS_dispatch_queue> *_keySessionQueue;
    ICStoreRequestContext *_requestContext;
    NSData *_persistentKeyData;
    NSData *_certificateData;
    _BLAcquireSlotRequest *_slotRequest;
    AVContentKeyRequest *_activeKeyRequest;
    AVPersistableContentKeyRequest *_activePersistableKeyRequest;
}

@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSString *identity;
@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (id)initWithRequestContext:(id)a0;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_deviceGUID;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)_createSPCData;
- (void)_ksq_fetchCKCDataUsingSPC:(id)a0 forKeyRequest:(id)a1;

@end
