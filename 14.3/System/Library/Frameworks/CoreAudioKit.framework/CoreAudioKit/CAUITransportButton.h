@interface CAUITransportButton : UIButton {
    int drawingStyle;
    struct CGColor { } *fillColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
}

@property int drawingStyle;
@property struct CGColor { } *fillColor;

+ (Class)layerClass;

- (void)flash;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGPath { } *)newPathRefForStyle:(int)a0;

@end
