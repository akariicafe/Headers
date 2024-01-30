@class NSString, AVSystemController, NSMutableSet, NSNumber;

@interface AVSystemVolumeController : NSObject <AVVolumeController>

@property (class, readonly, nonatomic) NSMutableSet *windowSceneVolumeHUDAssertions;

@property (nonatomic, getter=isChangingVolume) BOOL changingVolume;
@property (nonatomic) BOOL currentRouteHasVolumeControl;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic, getter=isEUVolumeLimitEnabled) BOOL EUVolumeLimitEnabled;
@property (nonatomic, getter=isEUVolumeLimitOverridden) BOOL EUVolumeLimitOverridden;
@property (nonatomic) float volume;
@property (nonatomic) BOOL volumeChangesThrottled;
@property (nonatomic) BOOL canOverrideEUVolumeLimit;
@property (retain, nonatomic) NSNumber *targetVolumeInternal;
@property (retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (readonly, nonatomic) NSString *volumeCategory;
@property (retain, nonatomic) AVSystemController *sharedSystemController;
@property (nonatomic, getter=isFullyInitialized) BOOL fullyInitialized;
@property (readonly, nonatomic) float effectiveVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)volumeController;

- (void)setClientWithIdentifier:(id)a0 prefersSystemVolumeHUDHidden:(BOOL)a1 forWindowSceneSessionWithIdentifier:(id)a2;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)a0;
- (void)endChangingVolume;
- (void)setTargetVolume:(float)a0;
- (void)_removeVolumeHUDAssertionsForClientID:(id)a0;
- (id)init;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forSceneVolumeHudAssertion:(id)a1;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forWindowSceneSessionIdentifier:(id)a1;
- (void)_postNotificationForNameIfFullyInitialized:(id)a0 userInfo:(id)a1;
- (void)_observeSystemController;
- (void)_unobserveSystemController;
- (void)_performOnMainThread:(id /* block */)a0;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_handleEUVolumeLimitDidChangeNotification:(id)a0;
- (void)_handleSystemVolumeDidChangeNotification:(id)a0;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)a0;
- (void)_applyProposedVolumeIfNeeded;
- (void)_applyProposedVolumeImmediately;
- (void).cxx_destruct;
- (void)dealloc;

@end
