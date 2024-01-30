@class UIVisualEffectView;

@interface HUCameraBlurViewController : UIViewController

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL showingBlur;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldShowBlurForPlaybackEngine:(id)a0;
- (void)updateBlurWithPlaybackEngine:(id)a0;

@end
