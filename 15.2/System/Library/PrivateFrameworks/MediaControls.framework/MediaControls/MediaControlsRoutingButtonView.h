@class CCUICAPackageView;

@interface MediaControlsRoutingButtonView : MPButton

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) BOOL userInterfaceStyleSwitchingEnabled;

+ (BOOL)_cursorInteractionEnabled;

- (void)layoutSubviews;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)setHighlighted:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateGlyphState;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_glyphResource;
- (void)_updateGlyphPackage;

@end
