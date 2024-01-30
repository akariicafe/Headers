@class UIView, _UIStatusBarItem, NSString, _UIStatusBarIdentifier, _UIStatusBarRegion, _UIStatusBarDisplayItemPlacement, _UIStatusBarAction, _UIStatusBarStyleAttributes;
@protocol UILayoutItem, _UIStatusBarDisplayable;

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable>

@property (retain, nonatomic) id<UILayoutItem> layoutItem;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL needsAddingToLayout;
@property (readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier;
@property (readonly, weak, nonatomic) _UIStatusBarItem *item;
@property (readonly, nonatomic) id<_UIStatusBarDisplayable> displayable;
@property (readonly, nonatomic) UIView<_UIStatusBarDisplayable> *view;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL visible;
@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic) double alpha;
@property (nonatomic) double viewAlpha;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } viewTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absoluteFrame;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double centerOffset;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) long long overriddenVerticalAlignment;
@property (weak, nonatomic) _UIStatusBarRegion *region;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL floating;
@property (readonly, nonatomic) long long priority;
@property (retain, nonatomic) _UIStatusBarAction *action;
@property (retain, nonatomic) _UIStatusBarAction *hoverAction;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absoluteHoverFrame;
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } extendedHoverInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } actionInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyStyleAttributes:(id)a0;
- (void)_updateComputedTransform;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 item:(id)a1;
- (void)_updateComputedAlpha;

@end
