@class PKPass, PKTexturedCardView, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView {
    PKPass *_pass;
    PKTexturedCardView *_cardView;
    UIImageView *_logoImageView;
    BOOL _invalidated;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)setMotionEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;

@end
