@class UIColor, UIView;
@protocol _UISwipeActionButtonDelegate, UISwipeActionVisualStyle;

@interface UISwipeActionButton : UIButton

@property (weak, nonatomic) id<_UISwipeActionButtonDelegate> swipeActionButtonDelegate;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) id<UISwipeActionVisualStyle> visualStyle;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (readonly, nonatomic) double buttonWidth;
@property (nonatomic) BOOL autosizes;
@property (readonly, nonatomic) UIView *sourceView;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (double)defaultButtonWidth;
- (void)setBackgroundColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)titleFont;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (double)_titleFontWeightForCurrentIdiom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_allowableContentRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_defaultLayoutForHeight:(double)a0;
- (BOOL)_heightDemandsCompactLayout;
- (double)_horizontalPaddingForCurrentIdiom;
- (double)_maxFontSizeForCurrentIdiom;
- (double)_minFontSizeForCurrentIdiom;
- (double)_minScaleFactorForFont:(id)a0;
- (long long)_numberOfLinesForTitle:(id)a0;
- (id)titleFontOfSize:(double)a0;

@end
