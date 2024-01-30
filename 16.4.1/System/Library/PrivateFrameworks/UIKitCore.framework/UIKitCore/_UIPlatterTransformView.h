@class _UIPortalView, _UIMorphingPlatterBackgroundCaptureView, UIView, UITargetedPreview;

@interface _UIPlatterTransformView : UIView

@property (retain, nonatomic) _UIPortalView *portalView;
@property (readonly, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL shouldTakeOwnershipOfSourceView;
@property (retain, nonatomic) _UIPortalView *backgroundPortalView;
@property (retain, nonatomic) _UIMorphingPlatterBackgroundCaptureView *backgroundCaptureView;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL forwardsHitTestingToSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL appliesMinificationFilter;
@property (nonatomic) BOOL allowsUserInteraction;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateMinificationFilter;
- (void)didTearOffForDrag;

@end
