@class UIView, AVPlayerLooper, NSArray, AVPlayerViewController, AVTUILogger, AVTCircularButton, AVTTouchDownGestureRecognizer, AVPlayer;
@protocol AVTPaddleViewDelegate;

@interface AVTPaddleView : UIView

@property (retain, nonatomic) UIView *videoViewContainer;
@property (retain, nonatomic) UIView *addButtonViewContainer;
@property (retain, nonatomic) AVTCircularButton *addButton;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) AVPlayerViewController *videoController;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly, nonatomic) long long layoutDirection;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) AVTUILogger *logger;
@property (copy, nonatomic) id /* block */ preCommitBlock;
@property (nonatomic) BOOL automaticallyStartsPlaying;
@property (nonatomic) double padding;
@property (weak, nonatomic) id<AVTPaddleViewDelegate> delegate;

+ (double)defaultPadding;
+ (id)videoItem;

- (void)dismissAnimated:(BOOL)a0;
- (BOOL)isRTL;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleTapGesture;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithLayoutDirection:(long long)a0 symbolConfiguration:(id)a1;
- (void)_configureWithSymbolConfiguration:(id)a0;
- (void)stopPlayingIfNecessary;
- (void)startPlayingIfNecessary;
- (void)handleDismissGesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForVideoInCoordinateSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAddButtonInCoordinateSpace:(id)a0;
- (BOOL)isPointInsideTransparentRegion:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithLayoutDirection:(long long)a0;
- (void)updateLayoutFromPlusButtonView:(id)a0 videoView:(id)a1;
- (void)handleTapAddButton;
- (void)attachVideoController:(id)a0 looper:(id)a1;
- (void)showAnimated:(BOOL)a0;
- (void)playVideo;
- (void)pauseVideo;

@end
