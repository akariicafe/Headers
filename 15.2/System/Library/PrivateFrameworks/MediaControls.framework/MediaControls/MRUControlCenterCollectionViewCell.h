@class NSString, MRUNowPlayingHeaderView, MediaControlsMaterialView, UIView;

@interface MRUControlCenterCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>

@property (retain, nonatomic) MediaControlsMaterialView *materialView;
@property (retain, nonatomic) UIView *transformView;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setTransitionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isVisible:(BOOL)a1;

@end
