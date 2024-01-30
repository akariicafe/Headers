@interface SeymourMedia.StreamingKeyProvisioner : NSObject <AVContentKeySessionDelegate> {
    void /* unknown type, empty encoding */ workoutIdentifier;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ certificate;
    void /* unknown type, empty encoding */ backoffIntervalProvider;
    void /* unknown type, empty encoding */ keyDeliveryClient;
    void /* unknown type, empty encoding */ contentKeySession;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ onUnrecoverableError;
}

- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (BOOL)contentKeySession:(id)a0 shouldRetryContentKeyRequest:(id)a1 reason:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
