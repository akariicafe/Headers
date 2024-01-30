@class AVContentKeySession, NSString, NSURL, NSData, NSObject, ICStoreRequestContext;
@protocol OS_dispatch_queue;

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate> {
    AVContentKeySession *_keySession;
    NSObject<OS_dispatch_queue> *_keySessionQueue;
    ICStoreRequestContext *_requestContext;
    NSData *_persistentKeyData;
    NSData *_certificateData;
}

@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSString *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_deviceGUID;
- (id)initWithRequestContext:(id)a0;
- (void)execute;
- (void)_createSPCData;
- (void)_fetchCKCDataUsingSPC:(id)a0 forKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;

@end
