@class AVSecondScreenPlayerLayerView, AVPlayerLayer, UILabel, UIView;

@interface AVSecondScreenViewController : UIViewController

@property (readonly, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialScreenBoundsHint;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) AVPlayerLayer *sourcePlayerLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;

- (id)debugText;
- (void)setDebugText:(id)a0;
- (void)_updateLayout;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_updateContentViewIfNeeded;
- (void)loadPlayerLayerViewIfNeeded;

@end
