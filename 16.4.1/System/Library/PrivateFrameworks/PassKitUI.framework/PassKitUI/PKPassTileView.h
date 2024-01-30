@class PKPassthroughView, PKContinuousButton, UIFont, PKPassTileView_State, PKPassTileState, UIImageView, NSObject, PKPassTile, NSMutableArray, UIActivityIndicatorView, UILabel;
@protocol OS_dispatch_source;

@interface PKPassTileView : UIButton {
    PKPassthroughView *_contentView;
    struct { double fadeInDelay; BOOL iconHidden; BOOL titleHidden; BOOL bodyHidden; BOOL spinnerHidden; BOOL buttonHidden; } _animationState;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_body;
    UIActivityIndicatorView *_spinner;
    PKContinuousButton *_button;
    struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; double innerHorizontalMargin; double innerVerticalMargin; BOOL cornerSpinner; } _layoutState;
    PKPassTileState *_contentState;
    PKPassTileView_State *_state;
    NSObject<OS_dispatch_source> *_effectiveContentTimeout;
    BOOL _enabled;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _selectable;
    BOOL _highlightable;
    struct CGSize { double width; double height; } _labelContainerSize;
    NSMutableArray *_snapshots;
    UIFont *_significantFont;
    UIFont *_regularFont;
    UIFont *_titleFont;
    UIFont *_bodyFont;
    UIFont *_buttonFont;
    BOOL _animated;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
    NSObject<OS_dispatch_source> *_actionStateTimeout;
}

@property (retain, nonatomic) PKPassTile *content;
@property (nonatomic, getter=isInActionState) BOOL inActionState;
@property (nonatomic, getter=isCompact) BOOL compact;

- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)beginActionStateTimeout:(long long)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)performBatchUpdates:(id /* block */)a0 animated:(BOOL)a1;
- (void)setCompact:(BOOL)a0 animated:(BOOL)a1;
- (void)setContent:(id)a0 animated:(BOOL)a1;
- (void)setInActionState:(BOOL)a0 animated:(BOOL)a1;

@end
