@class UIView, NSString, UIImage, TabBar, UIImageView, UIButton, UIHoverGestureRecognizer, UIVisualEffectView, UILabel;

@interface TabBarItemView : UIView {
    UIVisualEffectView *_contentEffectsView;
    UIVisualEffectView *_borderEffectsView;
    UIVisualEffectView *_closeButtonEffectsView;
    UIView *_iconClipperView;
    UIView *_titleClipperView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    NSString *_titleText;
    TabBar *_tabBar;
    NSString *_truncatedTitleText;
    struct CGSize { double width; double height; } _truncatedTitleTextSize;
    BOOL _titleWasTruncated;
    UIImageView *_closeButtonImageView;
    UIView *_highlightView;
    UIHoverGestureRecognizer *_hoverRecognizer;
}

@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIButton *mediaStateMuteButton;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic) long long visibleEdge;
@property (nonatomic) BOOL hidesTitleText;
@property (nonatomic) double titleLayoutWidth;
@property (nonatomic) long long titleAnchorEdge;
@property (nonatomic) double titleAnchorAdditionalOffset;

- (void)_layoutTitleLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_hover:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void).cxx_destruct;
- (id)initWithTabBar:(id)a0;
- (BOOL)_hasRoomForIconAndCloseButton;
- (BOOL)_showsCloseButton;
- (void)updateTitleTruncation;
- (void)updateTabBarStyle;
- (void)configureForDragPreview;
- (long long)_physicalEdgeForLogicalEdge:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_closeButtonFrame;
- (void)_layoutTitleLabelUsingCachedTruncation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleBoundingBox;
- (long long)_iconPosition;
- (id)_truncatedTitleWithFont:(id)a0 desiredWidth:(double)a1 truncatedSize:(struct CGSize { double x0; double x1; } *)a2;
- (void)_updateCloseButtonAlpha;
- (void)_updateMediaStateButtonButtonAlpha;
- (void)_layoutMediaStateIndicator;
- (void)_updateIconViewVisibility;
- (void)_layoutEdges;
- (void)_layoutTitleClipperView;
- (void)_layoutCloseButton;
- (BOOL)_canUseCachedTitleTruncationOnBoundsChange;
- (void)_updateHighlightAlpha;
- (void)_showOrHideCloseButton;
- (BOOL)_isHovering;
- (void)_updateMediaStateIndicator;
- (BOOL)_isHoveringOverCloseButton;

@end
