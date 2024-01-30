@class UIColor, UIContextualAction, NSArray, UISwipeActionButton, UIView, NSMutableArray;
@protocol UISwipeActionPullViewDelegate;

@interface UISwipeActionPullView : UIView {
    UIView *_clippingView;
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    BOOL _swipeActionsDidChange;
    BOOL _isTentative;
    double _openThreshold;
    double _confirmationThreshold;
    double _minimumOffset;
    unsigned long long _style;
}

@property (weak, nonatomic) id<UISwipeActionPullViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long cellEdge;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) UIColor *backgroundPullColor;
@property (readonly, nonatomic) UIContextualAction *primarySwipeAction;
@property (readonly, nonatomic) double currentOffset;
@property (readonly, nonatomic) double openThreshold;
@property (readonly, nonatomic) double confirmationThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) BOOL hasActions;
@property (nonatomic) BOOL buttonsUnderlapSwipedView;
@property (nonatomic) BOOL autosizesButtons;
@property (nonatomic) unsigned long long state;

- (void)moveToOffset:(double)a0 extraOffset:(double)a1 animator:(id)a2 usingSpringWithStiffness:(double)a3 initialVelocity:(double)a4;
- (Class)_buttonClass;
- (unsigned long long)_swipeActionCount;
- (double)_paddingToSwipedView;
- (void)_tappedButton:(id)a0;
- (double)_totalInterButtonPadding;
- (double)_directionalMultiplier;
- (double)_interButtonPadding;
- (void)_setupClippingViewIfNeeded;
- (void)_pressedButton:(id)a0;
- (void)_unpressedButton:(id)a0;
- (void)_rebuildButtons;
- (void)_layoutClippingLayer;
- (void)_setLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)freeze;
- (void)_setWidth:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)description;
- (void)layoutSubviews;
- (void)resetView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithSwipeActions:(id)a0;
- (id)sourceViewForAction:(id)a0;
- (void)_performAction:(id)a0 offset:(double)a1 extraOffset:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cellEdge:(unsigned long long)a1 style:(unsigned long long)a2;

@end
