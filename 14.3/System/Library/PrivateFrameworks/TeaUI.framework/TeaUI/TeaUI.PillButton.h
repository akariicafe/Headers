@class UIColor;

@interface TeaUI.PillButton : UIButton {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ _backgroundColor;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) void /* unknown type, empty encoding */ contentOffset;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
