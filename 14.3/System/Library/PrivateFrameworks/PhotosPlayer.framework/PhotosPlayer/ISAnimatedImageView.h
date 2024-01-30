@class ISAnimatedImagePlayer, UIImageView, PFAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination>

@property (nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) ISAnimatedImagePlayer *player;
@property (retain, nonatomic) PFAnimatedImage *image;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimatedImage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)displayLayer:(id)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)setAlpha:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isReadyToDisplay;
- (void)didBeginAnimating;
- (void)frameDidChange;
- (id)initWithAnimatedImagePlayer:(id)a0;

@end
