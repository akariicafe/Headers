@class UIView, UITargetedPreview, _UIPortalView;

@interface _UIPlatterTransformView : UIView

@property (retain, nonatomic) _UIPortalView *portalView;
@property (readonly, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL shouldTakeOwnershipOfSourceView;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL forwardsHitTestingToSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL appliesMinificationFilter;
@property (nonatomic) BOOL allowsUserInteraction;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateMinificationFilter;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
