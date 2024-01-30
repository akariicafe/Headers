@class NSString, MPAVItem, NSMutableIndexSet, MPButton, MPAVController;

@interface MPTransportControls : UIView {
    NSMutableIndexSet *_heldParts;
    unsigned char _playing : 1;
    MPButton *_alternatesButton;
    MPButton *_bookmarkButton;
    MPButton *_chaptersButton;
    MPButton *_emailButton;
    MPButton *_fastForward15SecondsButton;
    MPButton *_likeOrBanButton;
    MPButton *_nextButton;
    MPButton *_playButton;
    MPButton *_previousButton;
    MPButton *_rewind15SecondsButton;
    MPButton *_rewind30SecondsButton;
    MPButton *_scaleButton;
    MPButton *_toggleFullscreenButton;
    id _volumeSlider;
}

@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (retain, nonatomic) MPAVItem *item;
@property (retain, nonatomic) MPAVController *player;
@property (nonatomic) BOOL registeredForPlayerNotifications;
@property (weak, nonatomic) id target;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) BOOL allowsWirelessPlayback;
@property (readonly, nonatomic) NSString *playButtonImage;
@property (readonly, nonatomic) NSString *pauseButtonImage;
@property (readonly, nonatomic) NSString *playPauseButtonImage;

+ (long long)buttonType;
+ (Class)buttonClass;
+ (unsigned long long)defaultVisibleParts;
+ (BOOL)buttonImagesUseBackgroundImage;

- (void)tintColorDidChange;
- (id)init;
- (id)buttonForPart:(unsigned long long)a0;
- (void)setDesiredParts:(unsigned long long)a0 animated:(BOOL)a1;
- (void)buttonHeld:(id)a0;
- (void)setVisibleParts:(unsigned long long)a0 animated:(BOOL)a1;
- (id)newButtonForPart:(unsigned long long)a0;
- (void)_alternateTypesChangedNotification:(id)a0;
- (void)_availableRoutesChangedNotification:(id)a0;
- (void)_itemChangedNotification:(id)a0;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)a0;
- (void)_itemDurationDidChangeNotification:(id)a0;
- (id)newVolumeSlider;
- (void)_timeMarkersAvailableNotification:(id)a0;
- (void)_playbackStateChangedNotification:(id)a0;
- (void)_validityChangedNotification:(id)a0;
- (BOOL)allowsWirelessPlaybackForCurrentItem;
- (void)reloadForAdditions:(id)a0 removals:(id)a1 animate:(BOOL)a2;
- (id)buttonImageForPart:(unsigned long long)a0;
- (id)disabledButtonImageForPart:(unsigned long long)a0;
- (id)highlightedButtonImageForPart:(unsigned long long)a0;
- (id)tintColorForPart:(unsigned long long)a0;
- (BOOL)_handleHoldForPart:(unsigned long long)a0;
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;
- (BOOL)alwaysHidesSystemVolumeHUD;
- (BOOL)usesTintColorForControls;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)a0;
- (void)_applyDesiredPartsWithAnimation:(BOOL)a0;
- (BOOL)_handleReleaseForPart:(unsigned long long)a0;
- (BOOL)_handleTapForPart:(unsigned long long)a0;
- (void)_reloadViewWithAnimation:(BOOL)a0;
- (id)_updateAdditions:(id)a0 removals:(id)a1 forPart:(unsigned long long)a2;
- (void)_updatePlayButtonImage;
- (void)_updateTintColorForPart:(unsigned long long)a0;
- (void)_updateEnabledStates:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)buttonDown:(id)a0;
- (void)buttonUp:(id)a0;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonHoldReleased:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;

@end
