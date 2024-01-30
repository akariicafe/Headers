@class NSArray, UIImageView, UIView, NSMutableArray;
@protocol CAMControlDrawerMenuButtonDelegate;

@interface CAMControlDrawerMenuButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton>

@property (readonly, nonatomic) UIImageView *_accessoryBackgroundView;
@property (readonly, nonatomic) NSMutableArray *_itemLabels;
@property (retain, nonatomic, setter=_setCachedMenuItems:) NSArray *_cachedMenuItems;
@property (nonatomic, setter=_setNeedsLoadMenuItems:) BOOL _needsLoadMenuItems;
@property (nonatomic, setter=_setTrackedItemIndex:) unsigned long long _trackedItemIndex;
@property (nonatomic, getter=_isTrackingExpansionToggle, setter=_setTrackingExpansionToggle:) BOOL _trackingExpansionToggle;
@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) BOOL _touchInTrackedView;
@property (retain, nonatomic, setter=_setHighlightedView:) UIView *_highlightedView;
@property (weak, nonatomic) id<CAMControlDrawerMenuButtonDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expansionInsets;
@property (nonatomic, getter=isExpanded) BOOL expanded;

+ (id)_backgroundImage;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (BOOL)isExpandable;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateLabels;
- (void).cxx_destruct;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1 shouldNotify:(BOOL)a2;
- (unsigned long long)_indexOfItemToTrackForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_loadMenuItemsIfNeeded;
- (BOOL)_shouldTrackView:(id)a0 forTouchAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateHighlightedView;
- (void)_updateSubviewAlphas;
- (void)didChangeContentSize;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setNeedsLoadMenuItems;
- (BOOL)shouldScaleImageWhileHighlighted;
- (void)updateLabelsIfNeeded;

@end
