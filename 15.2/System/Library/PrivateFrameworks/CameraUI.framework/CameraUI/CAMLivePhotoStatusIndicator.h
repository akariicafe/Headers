@class CAMLivePhotoBloomView;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateTintColor;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;

@end
