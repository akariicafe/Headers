@class UIVisualEffectView, CKBalloonView;
@protocol CKBalloonVibrancy;

@interface CKVibrantBalloonContainerView : UIView {
    CKBalloonView<CKBalloonVibrancy> *_vibrantBalloonView;
    UIVisualEffectView *_blurView;
    UIVisualEffectView *_vibrantView;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_commonInitWithVibrantBalloon:(id)a0;
- (void)_setupVisualEffectViews;
- (void)setColorOverlay:(id)a0;
- (id)initWithTextBalloonView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithAudioBallonView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setVibrancyEffect:(id)a0;
- (void)layoutSubviews;
- (void)setBlurEffect:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
