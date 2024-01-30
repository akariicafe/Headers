@interface ConversationKit.InCallControlButton : UIControl {
    void /* unknown type, empty encoding */ discBackgroundEffectView;
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

- (BOOL)isSelected;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
