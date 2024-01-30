@class CALayer, NSMutableDictionary, UIImage;
@protocol IMCustomSliderDelegate;

@interface IMCustomSlider : UISlider {
    struct CGPoint { double x; double y; } _previousLocation;
    struct CGPoint { double x; double y; } _beginLocation;
    double _factor;
}

@property (retain, nonatomic) NSMutableDictionary *perStateContent;
@property (retain, nonatomic) CALayer *breadcrumbLayer;
@property (nonatomic) float breadcrumbValue;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL fineScrubbing;
@property (nonatomic) double fineScrubbingVerticalRange;
@property (nonatomic) int speed;
@property (weak, nonatomic) id<IMCustomSliderDelegate> delegate;
@property (retain, nonatomic) UIImage *highlightedThumb;
@property (retain, nonatomic) UIImage *thumb;

- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (float)_scaleForIdealValueForVerticalPosition:(double)a0;
- (id)_imageForKey:(id)a0 forState:(unsigned long long)a1;
- (void)_setImage:(id)a0 key:(id)a1 forState:(unsigned long long)a2;
- (id)trackBreadcrumbImageForState:(unsigned long long)a0;
- (void)updateFactor:(double)a0;
- (float)_scaleForVerticalPosition:(double)a0;
- (void)setTrackBreadcrumbImage:(id)a0 forState:(unsigned long long)a1;

@end
