@class PKPass, UIImageView, PK3DCardView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {
    PKPass *_pass;
    PK3DCardView *_cardView;
    UIImageView *_logoImageView;
    BOOL _invalidated;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;
- (void)dealloc;
- (void)setMotionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)sceneDidRenderAtTime:(double)a0;
- (void)invalidate;

@end
