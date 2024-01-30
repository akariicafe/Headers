@interface TeaUI.PaddedShapeButton : UIButton {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onMenuPresentation;
    void /* unknown type, empty encoding */ _backgroundColor;
}

@property (nonatomic) void /* unknown type, empty encoding */ contentOffset;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
