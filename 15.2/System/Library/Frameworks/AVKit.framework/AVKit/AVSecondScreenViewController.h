@class AVSecondScreenPlayerLayerView, AVPlayerLayer, UILabel, UIView;

@interface AVSecondScreenViewController : UIViewController

@property (readonly, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialScreenBoundsHint;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) AVPlayerLayer *sourcePlayerLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;

- (void)viewDidLoad;
- (void)_updateLayout;
- (id)debugText;
- (void)viewDidLayoutSubviews;
- (void)setDebugText:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadPlayerLayerViewIfNeeded;
- (void)_updateContentViewIfNeeded;

@end
