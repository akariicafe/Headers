@class NSString, IDSService, NSObject;
@protocol OS_dispatch_queue, NACIDSClientDelegate;

@interface NACIDSClient : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
}

@property (weak, nonatomic) id<NACIDSClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)setHapticIntensity:(float)a0;
- (void)setSystemMuted:(BOOL)a0;
- (void)_handleListeningModesDidChange:(id)a0;
- (void)setHapticState:(long long)a0;
- (void)_handleAudioRoutesDidChange:(id)a0;
- (void)_handleEUVolumeLimitDidChange:(id)a0;
- (void)_handleHapticIntensityDidChange:(id)a0;
- (void)_handleHapticStateDidChange:(id)a0;
- (void)_handleMutedStateDidChange:(id)a0;
- (void)_handleProminentHapticStateDidChange:(id)a0;
- (void)_handleRouteObservationCancelled:(id)a0;
- (void)_handleSystemMutedStatedDidChange:(id)a0;
- (void)_handleVolumeControlAvailabilityDidChange:(id)a0;
- (void)_handleVolumeObservationCancelled:(id)a0;
- (void)_handleVolumeValueDidChange:(id)a0;
- (void)_handleVolumeWarningDidChange:(id)a0;
- (void)_sendMessage:(id)a0 type:(long long)a1 timeout:(double)a2 queueOne:(id)a3 priority:(long long)a4;
- (void)beginObservingAudioRoutesForCategory:(id)a0;
- (void)beginObservingListeningModesForTarget:(id)a0;
- (void)beginObservingVolumeForTarget:(id)a0;
- (void)endObservingAudioRoutesForCategory:(id)a0;
- (void)endObservingListeningModesForTarget:(id)a0;
- (void)endObservingVolumeForTarget:(id)a0;
- (void)pickAudioRouteWithIdentifier:(id)a0 category:(id)a1;
- (void)setCurrentListeningMode:(id)a0 forTarget:(id)a1;
- (void)setMuted:(BOOL)a0 forTarget:(id)a1;
- (void)setProminentHapticEnabled:(BOOL)a0;
- (void)setVolumeValue:(float)a0 forTarget:(id)a1;

@end
