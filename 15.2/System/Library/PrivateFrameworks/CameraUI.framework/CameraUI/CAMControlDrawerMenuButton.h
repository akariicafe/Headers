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

- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)layoutSubviews;
- (id)initWithLayoutStyle:(long long)a0;
- (void)_updateLabels;
- (BOOL)isExpandable;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1 shouldNotify:(BOOL)a2;
- (void)didChangeContentSize;
- (BOOL)shouldScaleImageWhileHighlighted;
- (BOOL)_shouldTrackView:(id)a0 forTouchAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateHighlightedView;
- (void)_updateSubviewAlphas;
- (void)updateLabelsIfNeeded;
- (unsigned long long)_indexOfItemToTrackForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)didSelectMenuItem:(id)a0;
- (void)_loadMenuItemsIfNeeded;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setNeedsLoadMenuItems;

@end
