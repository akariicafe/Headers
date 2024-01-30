@class NSError, UILongPressGestureRecognizer, NSArray, UIImage, UITapGestureRecognizer, UIImageView, CKImageData, NSString, CKAnimatedImage, MSSticker;

@interface MSStickerView : UIView <UIGestureRecognizerDelegate, CKAnimationTimerObserver>

@property (retain, nonatomic) NSError *stickerError;
@property (retain, nonatomic) UIImage *stickerImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CKAnimatedImage *image;
@property (retain, nonatomic) CKImageData *imageData;
@property (retain, nonatomic) NSArray *frames;
@property (nonatomic) BOOL initialLayoutComplete;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic) BOOL animating;
@property (readonly, nonatomic) BOOL isAnimated;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL isPeeled;
@property (retain, nonatomic) MSSticker *sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareForReuse;
- (void)startAnimating;
- (id)accessibilityLabel;
- (void)stopAnimating;
- (void)handleLongPress:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)isAnimating;
- (void)prepareForSnapshotting;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)updateAnimationTimerObserving;
- (void)_configureStickerView;
- (void)_loadAnimatedStickerfIfNecessary;
- (void)_loadSticker;
- (void)_resetPeel;
- (void)_stickerPreviewCachePreviewDidChange:(id)a0;
- (id)_stickerSendManager;
- (void)_swapWithOutlineImage;
- (void)_updateStickerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sticker:(id)a1;
- (void)stageStickerForce:(BOOL)a0;

@end
