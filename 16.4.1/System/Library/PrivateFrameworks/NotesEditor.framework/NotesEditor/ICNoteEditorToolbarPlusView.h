@class UIColor, CAGradientLayer, UIView;

@interface ICNoteEditorToolbarPlusView : UIView

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIView *plainView;
@property (retain, nonatomic) UIView *plusView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly, nonatomic) UIColor *itemColor;
@property (nonatomic) BOOL closeState;

+ (id)newCircleMaskWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateGradientLayerColors;

@end
