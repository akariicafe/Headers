@class UIColor, UIImage;

@interface AKToggleButton : UIButton

@property (nonatomic) BOOL showsBackgroundColor;
@property (nonatomic) BOOL shouldTintNormalImage;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIImage *templateImage;

+ (id)colorImage:(id)a0 withColor:(id)a1;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_touchCommitted:(id)a0;
- (void)_updateSelectionColorsAnimated:(BOOL)a0;
- (void)_setSelectedStateColorImage;
- (void)_setDeselectedStateColorImage;
- (void)_updateStateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateImage:(id)a1 autoUpdatesColor:(BOOL)a2;

@end
