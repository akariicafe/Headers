@class HFItem, UIVisualEffect, NSString, UIView, HUGridCellLayoutOptions, UIVisualEffectView, UIPointerInteraction, HUGridCellBackgroundView;
@protocol HUResizableCellDelegate;

@interface HUGridCell : UICollectionViewCell <UIPointerInteractionDelegate, HUGridCellProtocol>

@property (nonatomic) long long primaryState;
@property (retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *gridForegroundView;
@property (retain, nonatomic) UIVisualEffect *contentEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryContentEffect;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly, nonatomic) unsigned long long backgroundState;
@property (readonly, nonatomic) UIView *gridForegroundContentView;
@property (readonly, nonatomic) unsigned long long iconDisplayStyle;
@property (readonly, nonatomic) BOOL managesOwnBackgroundViewLayout;
@property (retain, nonatomic) HFItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) double pointerRegionMargin;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

+ (Class)layoutOptionsClass;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimationWithAspectRatio:(double)a0;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)prepareForReuse;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)displayStyleDidChange;
- (void)layoutOptionsDidChange;
- (void)_setupCommonCellAppearance;
- (void)_updateForegroundStyle;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)a0 desiredDisplayStyle:(unsigned long long)a1;

@end
