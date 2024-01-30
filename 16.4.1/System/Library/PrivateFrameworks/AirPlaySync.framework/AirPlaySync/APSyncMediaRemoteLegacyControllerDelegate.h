@class NSString;

@interface APSyncMediaRemoteLegacyControllerDelegate : NSObject <MRLegacyControllerDelegate> {
    struct weak_ptr<apsync::APSyncMediaRemoteLegacyController> { struct APSyncMediaRemoteLegacyController *__ptr_; struct __shared_weak_count *__cntrl_; } _weakCallbackContext;
    void /* function */ *_connectionStateDidChange;
    void /* function */ *_volumeControlAvailableDidChange;
    void /* function */ *_volumeDidChange;
    void /* function */ *_masterVolumeDidChange;
    void /* function */ *_endpointDescriptionDidChange;
    NSString *_ID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)legacyController:(id)a0 masterVolumeDidChange:(float)a1;
- (void)legacyController:(id)a0 volumeControlAvailabilityDidChange:(BOOL)a1 forOutputDevice:(id)a2;
- (void)legacyController:(id)a0 volumeDidChange:(float)a1 forOutputDevice:(id)a2;
- (void)legacyControllerConnectionDidConnect:(id)a0;
- (void)legacyControllerConnectionDidDisconnect:(id)a0 withError:(id)a1;
- (void)_endpointDescriptionChanged:(struct OpaqueFigEndpoint { } *)a0;
- (int)addEndpointDescriptionChangedListener:(struct OpaqueFigEndpoint { } *)a0;
- (id)initWithContextAndCallbacks:(void /* function */ *)a0 volumeControlAvailableChanged:(void /* function */ *)a1 volumeChanged:(void /* function */ *)a2 masterVolumeChanged:(void /* function */ *)a3 endpointDescriptionChanged:(void /* function */ *)a4 weakCallbackContext:(struct weak_ptr<apsync::APSyncMediaRemoteLegacyController> { struct APSyncMediaRemoteLegacyController *x0; struct __shared_weak_count *x1; })a5 ID:(id)a6;
- (int)removeEndpointDescriptionChangedListener:(struct OpaqueFigEndpoint { } *)a0;

@end
