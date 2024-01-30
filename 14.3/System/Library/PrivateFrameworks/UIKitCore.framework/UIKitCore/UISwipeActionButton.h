@class UIColor, UIView;

@interface UISwipeActionButton : UIButton

@property (class, readonly, nonatomic) double defaultButtonWidth;

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (readonly, nonatomic) double buttonWidth;
@property (nonatomic) BOOL autosizes;
@property (readonly, nonatomic) UIView *sourceView;

+ (id)titleFont;
+ (double)_minScaleFactorForFont:(id)a0;
+ (double)_horizontalPaddingForCurrentIdiom;
+ (double)_titleFontWeightForCurrentIdiom;
+ (id)titleFontOfSize:(double)a0;
+ (double)_maxFontSizeForCurrentIdiom;
+ (double)_minFontSizeForCurrentIdiom;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (unsigned long long)_defaultLayoutForHeight:(double)a0;
- (long long)_numberOfLinesForTitle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_allowableContentRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_heightDemandsCompactLayout;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
