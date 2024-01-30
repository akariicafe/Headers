@class UIVisualEffectView;

@interface HUCameraBlurViewController : UIViewController

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL showingBlur;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)shouldShowBlurForPlaybackEngine:(id)a0;
- (void)updateBlurWithPlaybackEngine:(id)a0;

@end
