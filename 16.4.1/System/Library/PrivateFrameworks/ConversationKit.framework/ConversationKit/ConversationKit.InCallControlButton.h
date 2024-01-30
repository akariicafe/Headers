@interface ConversationKit.InCallControlButton : UIControl <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ callbackCancellable;
    void /* unknown type, empty encoding */ discBackgroundEffectView;
    void /* unknown type, empty encoding */ discBackgroundVibrancyView;
    void /* unknown type, empty encoding */ discBackgroundFlatView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ paragraphStyle;
    void /* unknown type, empty encoding */ isUsingVisualEffects;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ discView;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ colorConfiguration;
    void /* unknown type, empty encoding */ contentAlpha;
    void /* unknown type, empty encoding */ menuDataSource;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (unsigned long long)_controlEventsForActionTriggered;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
