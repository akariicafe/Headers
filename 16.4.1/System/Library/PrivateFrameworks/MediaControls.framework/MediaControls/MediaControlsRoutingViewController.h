@interface MediaControlsRoutingViewController : MPAVRoutingViewController

- (BOOL)_canShowWhileLocked;
- (id)_createVolumeSlider;

@end
