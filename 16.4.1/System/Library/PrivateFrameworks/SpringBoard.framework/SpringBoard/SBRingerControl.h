@class SBBannerManager, SBRingerHUDViewController, NSString, SBRingerAlertElement, SBSoundController;

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate, SBRingerAlertElementDelegate> {
    BOOL _ringerMuted;
}

@property (readonly, weak, nonatomic) SBBannerManager *bannerManager;
@property (readonly, nonatomic) SBSoundController *soundController;
@property (weak, nonatomic) SBRingerHUDViewController *ringerHUDViewController;
@property (retain, nonatomic) SBRingerAlertElement *ringerAlertElement;
@property (nonatomic) float volume;
@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ringerAlertElementWantsToBeDismissed:(id)a0 forReason:(id)a1;
- (void)activateRingerHUD:(int)a0 withInitialVolume:(float)a1 fromSource:(unsigned long long)a2;
- (void)dismissRingerHUD;
- (void)ringerHUDViewControllerWantsToBePresented:(id)a0;
- (void)nudgeUp:(BOOL)a0;
- (void)buttonReleased;
- (BOOL)lastSavedRingerMutedState;
- (void)ringerAlertElementWantsToBePresented:(id)a0;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)a0;
- (void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)a0;
- (void)toggleRingerMute;
- (void)_dismissRingerAlertElement:(id)a0 forReason:(id)a1;
- (void)_dismissRingerHUDViewController:(id)a0 forReason:(id)a1;
- (void)activateRingerHUDFromMuteSwitch:(int)a0;
- (void)setVolume:(float)a0 forKeyPress:(BOOL)a1;
- (void).cxx_destruct;
- (void)ringerAlertElementWantsToResetAutomaticInvalidationTimer:(id)a0;
- (id)_ringerUICoordinator;
- (id)initWithBannerManager:(id)a0 soundController:(id)a1;

@end
