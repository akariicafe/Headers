@class UIView, NSString, UIImage, UIImageView, SFToggleBackgroundView, UIPointerInteraction, UIImageSymbolConfiguration, UIColor;

@interface SFNavigationBarToggleButton : UIButton <UIPointerInteractionDelegate> {
    BOOL _liftedForCursor;
    UIPointerInteraction *_pointerInteraction;
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    SFToggleBackgroundView *_selectedStateMaskView;
    UIView *_selectedStateFillView;
    unsigned long long _inputMode;
    BOOL _drawsLightGlyph;
    BOOL _usesInsetFromBackground;
    BOOL _highlightsBackground;
    UIImage *_image;
    double _resizableBackgroundCornerRadius;
    UIColor *_glyphTintColor;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;

@end
