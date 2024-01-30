@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NACXPCClient : NSObject <NACXPCInterface> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSMutableSet *_routeObservingCategories;
    NSMutableSet *_volumeObservingTargets;
    NSMutableSet *_listeningModesObservingTargets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)_proxy;
- (id)init;
- (void).cxx_destruct;
- (void)_createConnection;
- (void)setHapticIntensity:(float)a0;
- (void)EULimitForTarget:(id)a0 result:(id /* block */)a1;
- (void)setSystemMuted:(BOOL)a0;
- (void)setHapticState:(long long)a0;
- (void)_resumeListeningModesObservingIfNecessary;
- (void)_resumeRouteObservingIfNecessary;
- (void)_resumeVolumeObservingIfNecessary;
- (void)audioRoutesForCategory:(id)a0 result:(id /* block */)a1;
- (void)availableListeningModesForTarget:(id)a0 result:(id /* block */)a1;
- (void)beginObservingAudioRoutesForCategory:(id)a0;
- (void)beginObservingListeningModesForTarget:(id)a0;
- (void)beginObservingVolumeForTarget:(id)a0;
- (void)currentListeningModeForTarget:(id)a0 result:(id /* block */)a1;
- (void)endObservingAudioRoutesForCategory:(id)a0;
- (void)endObservingListeningModesForTarget:(id)a0;
- (void)endObservingVolumeForTarget:(id)a0;
- (void)hapticIntensity:(id /* block */)a0;
- (void)hapticState:(id /* block */)a0;
- (void)mutedStateForTarget:(id)a0 result:(id /* block */)a1;
- (void)pickAudioRouteWithIdentifier:(id)a0 category:(id)a1;
- (void)playAudioAndHapticPreview;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(id /* block */)a0;
- (void)setCurrentListeningMode:(id)a0 forTarget:(id)a1;
- (void)setMuted:(BOOL)a0 forTarget:(id)a1;
- (void)setProminentHapticEnabled:(BOOL)a0;
- (void)setVolumeValue:(float)a0 forTarget:(id)a1;
- (void)systemMutedState:(id /* block */)a0;
- (void)volumeControlAvailabilityForTarget:(id)a0 result:(id /* block */)a1;
- (void)volumeValueForTarget:(id)a0 result:(id /* block */)a1;
- (void)volumeWarningForTarget:(id)a0 result:(id /* block */)a1;

@end
