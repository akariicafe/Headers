@class UIColor;

@interface DBInCallWidgetButtonRingView : UIView

@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic, getter=isFocusRingVisible) BOOL focusRingVisible;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
