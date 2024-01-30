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

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)currentSystemController;
- (void)setClientWithIdentifier:(id)a0 forWindowSceneSessionWithIdentifier:(id)a1;
- (void)beginChangingVolume;
- (void)endChangingVolume;
- (void)setTargetVolume:(float)a0;
- (void)_removeVolumeHUDAssertionsForClientID:(id)a0;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forSceneVolumeHudAssertion:(id)a1;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forWindowSceneSessionIdentifier:(id)a1;
- (void)_postNotificationForNameIfFullyInitialized:(id)a0 userInfo:(id)a1;
- (id)_requestSharedSystemController;
- (void)_setupSystemController;
- (void)_observeSystemControllerIfNeeded;
- (void)_unobserveSystemControllerIfNeeded;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_handleSystemVolumeDidChangeNotification:(id)a0;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)a0;
- (void)_applyProposedVolumeIfNeeded;
- (void)_applyProposedVolumeImmediately;
- (void)_performOnMainThread:(id /* block */)a0;

@end
