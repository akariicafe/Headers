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

- (void)displayLayer:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (id)initWithAnimatedImage:(id)a0;
- (void)didBeginAnimating;
- (void)frameDidChange;
- (id)initWithAnimatedImagePlayer:(id)a0;
- (BOOL)isReadyToDisplay;

@end
