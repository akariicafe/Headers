@class NSString, NSTimer, SBRingerPillView, UIViewFloatAnimatableProperty;
@protocol SBRingerHUDViewControllerDelegate;

@interface SBRingerHUDViewController : UIViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling>

@property (retain, nonatomic) SBRingerPillView *pillView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *positionSpring;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *ringerValueSpring;
@property (retain, nonatomic) NSTimer *dismissalTimer;
@property (nonatomic) BOOL lastEventIsAVolumeChange;
@property (nonatomic) double overshoot;
@property (nonatomic) BOOL ringerSilent;
@property (weak, nonatomic) id<SBRingerHUDViewControllerDelegate> delegate;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_dismiss;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)nudgeUp:(BOOL)a0;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;
- (void)noteVolumeUpWasHit:(BOOL)a0;
- (void)noteVolumeDownWasHit:(BOOL)a0;
- (void)buttonReleased;
- (void)noteVolumeDidChange:(float)a0;
- (void)refreshAudioUI;
- (void)_createSprings;
- (void)setVolume:(float)a0 animated:(BOOL)a1 forKeyPress:(BOOL)a2;
- (void)presentForMuteSwitch:(BOOL)a0;
- (void)_layoutPillView;
- (void)swipeGesture:(id)a0;
- (void)_updateVolumeSliderAnimated:(BOOL)a0;
- (void)_updateStateAnimated:(BOOL)a0 invert:(BOOL)a1;
- (void)_extendDismissalTimer;
- (void)_setPositionSpringValue:(double)a0 completion:(id /* block */)a1;

@end
