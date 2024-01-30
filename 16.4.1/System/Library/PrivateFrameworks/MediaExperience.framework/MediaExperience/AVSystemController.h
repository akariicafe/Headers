@class NSString;

@interface AVSystemController : NSObject {
    struct AVSystemControllerPrivate { } *_priv;
    BOOL mFullMute;
    float mVolume;
    NSString *mCategory;
    struct OpaqueFigSystemController { } *mFigController;
}

+ (id)sharedInstance;
+ (void)postNotificationOnMainQueue:(id)a0 notification:(id)a1 object:(id)a2;
+ (id)sharedAVSystemController;
+ (id)compatibleAudioRouteForRoute:(id)a0;

- (BOOL)currentRouteHasVolumeControl;
- (void)dealloc;
- (id)init;
- (id)pickableRoutesForCategory:(id)a0 andMode:(id)a1;
- (id)errorWithCode:(int)a0 description:(id)a1;
- (BOOL)getVolume:(float *)a0 forCategory:(id)a1;
- (BOOL)setAttribute:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)attributeForKey:(id)a0;
- (id)volumeCategoryForAudioCategory:(id)a0;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (BOOL)changeActiveCategoryVolume:(BOOL)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (BOOL)changeActiveCategoryVolumeBy:(float)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)changeVolume:(BOOL)a0 forCategory:(id)a1;
- (BOOL)changeVolume:(BOOL)a0 forCategory:(id)a1 mode:(id)a2;
- (BOOL)changeVolumeBy:(float)a0 forCategory:(id)a1;
- (BOOL)changeVolumeForRoute:(BOOL)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (BOOL)changeVolumeForRouteBy:(float)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (BOOL)didCancelRoutePicking:(id)a0;
- (BOOL)getActiveCategoryMuted:(BOOL *)a0;
- (BOOL)getActiveCategoryMuted:(BOOL *)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1 fallbackCategory:(id)a2;
- (BOOL)getActiveCategoryVolume:(float *)a0 andName:(id *)a1 forRoute:(id)a2 andDeviceIdentifier:(id)a3;
- (BOOL)getVibeIntensity:(float *)a0;
- (BOOL)getVolume:(float *)a0 forCategory:(id)a1 mode:(id)a2;
- (BOOL)getVolumeForRoute:(float *)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (void)handleServerDied;
- (BOOL)hasRouteSharingPolicyLongFormVideo:(id)a0;
- (BOOL)overrideToPartnerRoute;
- (id)pickableRoutesForCategory:(id)a0;
- (void)postEffectiveVolumeNotification:(id)a0;
- (void)postFullMuteDidChangeNotification:(id)a0;
- (id)routeForCategory:(id)a0;
- (BOOL)setActiveCategoryVolumeTo:(float)a0;
- (BOOL)setActiveCategoryVolumeTo:(float)a0 fallbackCategory:(id)a1 resultVolume:(float *)a2 affectedCategory:(id *)a3;
- (BOOL)setActiveCategoryVolumeTo:(float)a0 forRoute:(id)a1 andDeviceIdentifier:(id)a2;
- (BOOL)setBTHFPRoute:(id)a0 availableForVoicePrompts:(BOOL)a1;
- (BOOL)setPickedRouteWithPassword:(id)a0 withPassword:(id)a1;
- (BOOL)setVibeIntensityTo:(float)a0;
- (BOOL)setVolumeForRouteTo:(float)a0 forCategory:(id)a1 mode:(id)a2 route:(id)a3 deviceIdentifier:(id)a4 andRouteSubtype:(id)a5;
- (BOOL)setVolumeTo:(float)a0 forCategory:(id)a1;
- (BOOL)setVolumeTo:(float)a0 forCategory:(id)a1 mode:(id)a2;
- (BOOL)shouldClientWithAudioScore:(int)a0 hijackRoute:(id)a1 hijackDeniedReason:(id *)a2;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)a0 andDeviceIdentifier:(id)a1;
- (int)volumeCategoryAndMode:(id)a0 mode:(id)a1 outCategory:(id *)a2 outMode:(id *)a3;

@end
