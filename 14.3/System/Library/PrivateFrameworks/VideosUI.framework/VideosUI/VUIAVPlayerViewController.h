@class UIViewController, NSString, NSArray, AVPlayerViewControllerCustomControlsView, UIView, AVPlayer;

@interface VUIAVPlayerViewController : AVPlayerViewController <VUIPlayerViewController>

@property (nonatomic) BOOL allowAutorotate;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (copy, nonatomic) NSArray *customControlItems;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;
@property (readonly, nonatomic) double videoDisplayScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
