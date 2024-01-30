@class UIColor;

@interface PosterBoard.PBFCircleView : UIView {
    void /* unknown type, empty encoding */ _strokeWidth;
    void /* unknown type, empty encoding */ _strokeColor;
    void /* unknown type, empty encoding */ _fillColor;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) double strokeWidth;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) UIColor *fillColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
