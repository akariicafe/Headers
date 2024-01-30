@class UIViewController, UIView, CFXClip, CFXClipCompositionDataSource;
@protocol JFXAVPlayerViewer;

@interface CFXClipPlayerViewController : JFXCompositionPlayerViewController

@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *placeholderContainerView;
@property (weak, nonatomic) UIViewController<JFXAVPlayerViewer> *avPlayerView;
@property (retain, nonatomic) CFXClipCompositionDataSource *clipDataSource;
@property (retain, nonatomic) CFXClip *clip;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)displayCompositionUpdateLoadingView:(id)a0;
- (id)playerViewer;
- (void)reloadClip;
- (void)reloadClipAndSeekToStart:(BOOL)a0;
- (void)updateCompositionForEffectChange;

@end
