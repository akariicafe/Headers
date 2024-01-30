@class NSString, UIImageView, PKPaymentService, PKCategoryVisualizationCardView, PKPass;

@interface PKTransactionDataOverlayCardFaceView : UIView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver> {
    PKPass *_pass;
    UIImageView *_maskView;
    PKCategoryVisualizationCardView *_overlayView;
    PKPaymentService *_paymentService;
    BOOL _invalidated;
    BOOL _foregroundActive;
    int _unlockNotifyToken;
}

@property (nonatomic, getter=isContentSuppressed) BOOL contentSuppressed;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)borderColor;
+ (double)borderWidth;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1 rendererState:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1 rendererState:(id)a2 fetchInitialContentSynchronously:(BOOL)a3;
- (void)_updateMagnitudesWithStyle:(long long)a0 completion:(id /* block */)a1;
- (void)_updateContentIfPossible;
- (id)rendererState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;
- (void)dealloc;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateCategoryVisualizationWithStyle:(long long)a1;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)layoutSubviews;
- (void)invalidate;

@end
