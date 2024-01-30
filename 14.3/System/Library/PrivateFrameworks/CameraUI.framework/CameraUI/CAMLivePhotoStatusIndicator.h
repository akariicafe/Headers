@class CAMLivePhotoAnimationCache;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

@property (retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache;
@property (nonatomic) long long livePhotoMode;

- (BOOL)shouldUseOutline;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (BOOL)canAnimate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)preloadAnimationFrames;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;
- (id)imageAnimationFramesForCurrentState;

@end
