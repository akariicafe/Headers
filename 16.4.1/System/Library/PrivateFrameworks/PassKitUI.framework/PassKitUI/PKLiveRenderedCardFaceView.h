@class PKPayLaterCardView, NSString, PKTexturedCardView, UIImageView, PKPass;

@interface PKLiveRenderedCardFaceView : UIView <PKForegroundActiveArbiterObserver> {
    PKPass *_pass;
    PKTexturedCardView *_cardView;
    PKPayLaterCardView *_payLaterCardView;
    UIImageView *_logoImageView;
    BOOL _invalidated;
    BOOL _foregroundActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAuthenticate;
- (void)didDismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void)invalidate;
- (void)didPresent;
- (void).cxx_destruct;
- (void)_showArmedState:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;
- (void)setMotionEnabled:(BOOL)a0;

@end
