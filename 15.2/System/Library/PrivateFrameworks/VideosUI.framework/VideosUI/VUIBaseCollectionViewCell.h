@class UIColor, NSString, CALayer, UIView;
@protocol VUICollectionViewCellInteractor;

@interface VUIBaseCollectionViewCell : UICollectionViewCell <VUICollectionCellEventIntercepting>

@property (nonatomic, getter=isBeingDisplayed) BOOL beingDisplayed;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL shouldAppearSelected;
@property (readonly, nonatomic) UIView *vuiContentView;
@property (readonly, nonatomic) UIView *vuiCellView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } vuiBounds;
@property (readonly, nonatomic) CALayer *vuiLayer;
@property (weak, nonatomic) id<VUICollectionViewCellInteractor> vuiCollectionViewCellInteractor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didEndDisplaying;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didSelect;
- (BOOL)vui_addSubview:(id)a0 oldView:(id)a1;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)vui_setNeedsLayout;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)vui_prepareForReuse;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)vui_setSelected:(BOOL)a0;
- (BOOL)vui_highlighted;
- (BOOL)vui_selected;
- (void)vui_cellWillBeDisplayed;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)willBeDisplayed;

@end
