@interface CLKUIWheelsOfTimeButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchEdgeInsets;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createButtonImage:(struct __CFAttributedString { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getMaxTextBounds;
- (struct __CFAttributedString { } *)_newAttributedString:(id)a0 withFont:(id)a1 usingKerning:(double)a2 textColor:(id)a3;
- (void)setButtonText:(id)a0 selectedFont:(id)a1 selectedTextColor:(id)a2 unselectedFont:(id)a3 unselectedTextColor:(id)a4 kerning:(double)a5;

@end
