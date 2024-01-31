@class NSString, AVSystemController, NSMutableSet, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AVSystemVolumeController : NSObject <AVVolumeHUDAssertionDelegate, AVVolumeController> {
    NSObject<OS_dispatch_queue> *_systemControllerQueue;
    BOOL _observingSystemController;
}

@property (class, readonly, nonatomic) NSMutableSet *windowSceneVolumeHUDAssertions;

@property (nonatomic, getter=isChangingVolume) BOOL changingVolume;
@property (nonatomic) BOOL currentRouteHasVolumeControl;
@property (nonatomic) float volume;
@property (nonatomic) BOOL volumeChangesThrottled;
@property (retain, nonatomic) NSNumber *targetVolumeInternal;
@property (retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (readonly, nonatomic) NSString *volumeCategory;
@property (retain, nonatomic) AVSystemController *sharedSystemController;
@property (nonatomic, getter=isFullyInitialized) BOOL fullyInitialized;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *windowSceneSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;

+ (id)volumeController;

- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forSceneVolumeHudAssertion:(id)a1;
- (id)currentSystemController;
- (id)init;
- (void)_performOnMainThread:(id /* block */)a0;
- (void)_applyProposedVolumeIfNeeded;
- (void)dealloc;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)a0;
- (id)_requestSharedSystemController;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forWindowSceneSessionIdentifier:(id)a1;
- (void)_postNotificationForNameIfFullyInitialized:(id)a0 userInfo:(id)a1;
- (void)endChangingVolume;
- (void)setClientWithIdentifier:(id)a0 forWindowSceneSessionWithIdentifier:(id)a1;
- (void)_handleSystemVolumeDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_setupSystemController;
- (void)beginChangingVolume;
- (void)setTargetVolume:(float)a0;
- (void)_removeVolumeHUDAssertionsForClientID:(id)a0;
- (void)_applyProposedVolumeImmediately;
- (void)setVolume:(float)a0 shouldShowHUD:(BOOL)a1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_unobserveSystemControllerIfNeeded;
- (void)_observeSystemControllerIfNeeded;

@end
