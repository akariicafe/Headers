@class NSString, SBElasticVolumeViewController;
@protocol SBVolumeHUDViewControllerDelegate;

@interface SBVolumeHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate, SBHUDViewControlling>

@property (readonly, nonatomic) SBElasticVolumeViewController *elasticAudioViewController;
@property (weak, nonatomic) id<SBVolumeHUDViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)_dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;
- (void)noteVolumeUpWasHit:(BOOL)a0;
- (void)noteVolumeDownWasHit:(BOOL)a0;
- (void)noteVolumeWillDeltaStepToVolume:(double)a0;
- (void)noteVolumeDidChange:(float)a0;
- (void)refreshAudioUI;
- (float)elasticAudioViewControllerCurrentVolume:(id)a0;
- (BOOL)elasticAudioViewController:(id)a0 updateCurrentVolumeToLevel:(float)a1;
- (id)elasticAudioViewControllerActiveAudioRouteTypes:(id)a0;
- (id)elasticAudioViewControllerActiveAudioCategory:(id)a0;
- (BOOL)elasticAudioViewControllerShouldShowVolumeWarningForCurrentVolumeLevel:(id)a0;
- (void)elasticVolumeViewControllerNeedsDismissal:(id)a0;
- (unsigned long long)_volumeHUDPresentationEdge;

@end
