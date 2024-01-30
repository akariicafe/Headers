@class SBSoundController, SBHUDController, NSString;

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate> {
    BOOL _ringerMuted;
}

@property (readonly, nonatomic) SBHUDController *HUDController;
@property (readonly, nonatomic) SBSoundController *soundController;
@property (nonatomic) float volume;
@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)lastSavedRingerMutedState;
- (void)activateRingerHUDFromMuteSwitch:(int)a0;
- (id)initWithHUDController:(id)a0 soundController:(id)a1;
- (void)buttonReleased;
- (void)nudgeUp:(BOOL)a0;
- (void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)a0;
- (void)setVolume:(float)a0 forKeyPress:(BOOL)a1;
- (void)activateRingerHUD:(int)a0 withInitialVolume:(float)a1 fromSource:(unsigned long long)a2;
- (id)existingRingerHUDViewController;
- (void)hideRingerHUDIfVisible;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)a0;
- (void)toggleRingerMute;

@end
