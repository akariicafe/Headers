@class UIColor, CAShapeLayer, UIView, PKSwatchColor;

@interface PKPaletteColorSwatch : UIView

@property (retain, nonatomic) UIView *colorBackgroundView;
@property (retain, nonatomic) CAShapeLayer *selectionRingMaskLayer;
@property (retain, nonatomic) UIView *colorBulletView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL showsSelectionHighlight;
@property (retain, nonatomic) PKSwatchColor *swatchColor;
@property (readonly, nonatomic) UIColor *presentationColor;
@property (nonatomic) long long colorUserInterfaceStyle;

- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateColorBulletView;
- (void)_updateSelectionHighlight;
- (id)_colorBulletOutlineColor;
- (id)newColorBackgroundView;
- (BOOL)wantsBackgroundViewColor;
- (BOOL)wantsColorBulletVisible;

@end
