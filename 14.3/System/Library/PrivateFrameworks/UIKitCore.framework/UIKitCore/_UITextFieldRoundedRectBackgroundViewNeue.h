@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {
    struct { unsigned char enabled : 1; unsigned char hasFlexibleCornerRadius : 1; unsigned char usesSinglePixelLineWidth : 1; } _flags;
}

@property (nonatomic) BOOL usesSinglePixelLineWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL hasFlexibleCornerRadius;

- (void)updateView;
- (id)_fillColor:(BOOL)a0;
- (id)_strokeColor:(BOOL)a0;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1 usesSinglePixelLineWidth:(BOOL)a2 updateView:(BOOL)a3;
- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1 usesSinglePixelLineWidth:(BOOL)a2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (double)_screenScale;

@end
