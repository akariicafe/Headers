@class NSString;

@interface StocksUI.TodayView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ brandingLabel;
    void /* unknown type, empty encoding */ isSelectable;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isHighlightable;
    void /* unknown type, empty encoding */ isHighlighted;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ labelAlphaValueWhenEditing;
    void /* unknown type, empty encoding */ shouldChangeLabelAlphaWhenEditing;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
