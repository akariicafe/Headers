@interface AVSystemController : NSObject {
    struct AVSystemControllerPrivate { BOOL x0; BOOL x1; float x2; id x3; struct OpaqueFigSystemController *x4; id x5; id x6; } *_priv;
}

+ (void)initialize;
+ (id)compatibleAudioRouteForRoute:(id)a0;
+ (id)sharedAVSystemController;

- (id)attributeForKey:(id)a0;
- (BOOL)setActiveCategoryVolumeTo:(float)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (id)init;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0;
- (id)errorWithCode:(int)a0 description:(id)a1;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)a0 andDeviceIdentifier:(id)a1;
- (BOOL)setVolumeForRouteTo:(float)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (void)dealloc;
- (BOOL)okToNotifyFromThisThread;
- (BOOL)setVibeIntensityTo:(float)a0;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (void)postEffectiveVolumeNotification:(void *)a0;
- (BOOL)setVolumeTo:(float)a0 forCategory:(id)a1;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (void)postFullMuteDidChangeNotification:(void *)a0;
- (BOOL)setBTHFPRoute:(id)a0 availableForVoicePrompts:(BOOL)a1;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0;
- (BOOL)changeVolumeForRouteBy:(float)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (BOOL)setPickedRouteWithPassword:(id)a0 withPassword:(id)a1;
- (BOOL)changeVolumeForRoute:(BOOL)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (BOOL)setActiveCategoryVolumeTo:(float)a0;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1 forRoute:(id)a2 andDeviceIdentifier:(id)a3;
- (BOOL)changeVolumeBy:(float)a0 forCategory:(id)a1;
- (BOOL)getVolume:(float *)a0 forCategory:(id)a1;
- (BOOL)changeVolume:(BOOL)a0 forCategory:(id)a1;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1 fallbackCategory:(id)a2;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (id)routeForCategory:(id)a0;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)currentRouteHasVolumeControl;
- (BOOL)getVolumeForRoute:(float *)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (void)handleServerDied;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)getActiveCategoryMuted:(BOOL *)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (BOOL)didCancelRoutePicking:(id)a0;
- (id)volumeCategoryForAudioCategory:(id)a0;
- (id)pickableRoutesForCategory:(id)a0;
- (BOOL)setActiveCategoryVolumeTo:(float)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (BOOL)setAttribute:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)shouldClientWithAudioScore:(int)a0 hijackRoute:(id)a1 hijackDeniedReason:(id *)a2;
- (BOOL)getActiveCategoryMuted:(BOOL *)a0;
- (BOOL)getVibeIntensity:(float *)a0;
- (BOOL)hasRouteSharingPolicyLongFormVideo:(id)a0;
- (id)pickableRoutesForCategory:(id)a0 andMode:(id)a1;

@end
