@class CCUICAPackageView;

@interface MediaControlsRoutingButtonView : MPButton

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) BOOL userInterfaceStyleSwitchingEnabled;

+ (BOOL)_cursorInteractionEnabled;

- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void).cxx_destruct;
- (id)_glyphResource;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)_updateGlyphPackage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateGlyphState;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
