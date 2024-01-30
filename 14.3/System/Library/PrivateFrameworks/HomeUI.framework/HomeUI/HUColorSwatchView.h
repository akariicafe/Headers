@class UIColor, NSString, CAShapeLayer, UILabel;

@interface HUColorSwatchView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleOuterLayer;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) BOOL labelHidden;
@property (retain, nonatomic) NSString *text;

+ (Class)layerClass;

- (void)_updateLayout;
- (void)_updateTextColor;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;

@end
