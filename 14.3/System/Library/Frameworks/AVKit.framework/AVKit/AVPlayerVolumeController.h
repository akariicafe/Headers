@class AVObservationController, AVPlayerController, NSString;

@interface AVPlayerVolumeController : NSObject <AVVolumeController>

@property (nonatomic, getter=isChangingVolume) BOOL changingVolume;
@property (retain, nonatomic) AVObservationController *keyValueObservationController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) float effectiveVolumeLimit;
@property (readonly, nonatomic) BOOL currentRouteHasVolumeControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)volumeController;

- (void)setClientWithIdentifier:(id)a0 prefersSystemVolumeHUDHidden:(BOOL)a1 forWindowSceneSessionWithIdentifier:(id)a2;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)a0;
- (void)endChangingVolume;
- (void)setTargetVolume:(float)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
