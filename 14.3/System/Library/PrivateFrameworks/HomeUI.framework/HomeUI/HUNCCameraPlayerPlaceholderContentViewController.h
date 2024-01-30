@class HFCameraPlaybackEngine, UIImageView, NSURL, HMCameraClip, UIImage, NSString;

@interface HUNCCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver>

@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) HMCameraClip *lastRequestedClip;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *notificationImage;
@property (nonatomic) BOOL shouldShowPlaceholderContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackError:(id)a1;
- (void)updatePlaceholderContent;
- (BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
- (void)updatePlaceholderImage:(id)a0;
- (void)hu_reloadData;
- (id)initWithPlaybackEngine:(id)a0 imageURL:(id)a1;

@end
