@class UIColor;

@interface TeaUI.SeparatorView : UIView {
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ visibilityStyle;
    void /* unknown type, empty encoding */ isHighlighted;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ hidesOnSelection;
    void /* unknown type, empty encoding */ _backgroundColor;
    void /* unknown type, empty encoding */ thickness;
}

@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) UIColor *backgroundColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHidden;
- (void).cxx_destruct;

@end
