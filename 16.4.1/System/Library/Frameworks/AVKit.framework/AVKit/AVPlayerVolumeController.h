@class AVObservationController, AVPlayerController, NSString;

@interface AVPlayerVolumeController : NSObject <AVVolumeController>

@property (nonatomic, getter=isChangingVolume) BOOL changingVolume;
@property (retain, nonatomic) AVObservationController *keyValueObservationController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) float volume;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;
@property (readonly, nonatomic) BOOL currentRouteHasVolumeControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)volumeController;

- (void)endChangingVolume;
- (void)dealloc;
- (id)init;
- (void)setTargetVolume:(float)a0;
- (void)beginChangingVolume;
- (void)setClientWithIdentifier:(id)a0 forWindowSceneSessionWithIdentifier:(id)a1;
- (void).cxx_destruct;

@end
