@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
    double _cornerRadius;
}

@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) double cornerRadiusScale;
@property (nonatomic) BOOL ignoreCornerRadiusUpdates;

- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;

@end
