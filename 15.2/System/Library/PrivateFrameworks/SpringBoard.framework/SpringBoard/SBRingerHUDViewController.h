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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)_dismiss;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;
- (void)buttonReleased;
- (void)nudgeUp:(BOOL)a0;
- (void)_createSprings;
- (void)setVolume:(float)a0 animated:(BOOL)a1 forKeyPress:(BOOL)a2;
- (void)presentForMuteSwitch:(BOOL)a0;
- (void)_layoutPillView;
- (void)swipeGesture:(id)a0;
- (void)_updateVolumeSliderAnimated:(BOOL)a0;
- (void)_updateStateAnimated:(BOOL)a0 invert:(BOOL)a1;
- (void)_extendDismissalTimer;
- (void)_setPositionSpringValue:(double)a0 completion:(id /* block */)a1;
- (void)noteVolumeUpWasHit:(BOOL)a0;
- (void)noteVolumeDownWasHit:(BOOL)a0;
- (void)noteVolumeDidChange:(float)a0;
- (void)refreshAudioUI;

@end
