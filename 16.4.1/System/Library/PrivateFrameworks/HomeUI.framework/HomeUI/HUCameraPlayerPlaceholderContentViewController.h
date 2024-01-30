@class HFCameraPlaybackEngine, UIImageView, NSString, HMCameraClip;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver>

@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) HMCameraClip *lastRequestedClip;
@property (nonatomic) BOOL cameraPlayerHasContentToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackEngine:(id)a0;
- (void)playbackEngine:(id)a0 didUpdatePlaybackError:(id)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
- (BOOL)_shouldShowDefaultPlaceholderContent;
- (BOOL)_shouldShowPlaceholderContentForUserScrubbing;
- (void)hu_reloadData;
- (BOOL)shouldShowPlaceholderContent;
- (void)updatePlaceholderContent;
- (void)updatePlaceholderImage:(id)a0;

@end
