@class CAGradientLayer, NSArray, NSString, CAShapeLayer, UIView, CLKDevice, CALayer;
@protocol CLKMonochromeFilterProvider;

@interface CDRichComplicationShapeView : UIView <CLKMonochromeComplicationView> {
    CLKDevice *_device;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    BOOL _willUnfreezeForTransaction;
    UIView *_filterView;
    CALayer *_freezeLayer;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_gradientLayer;
    NSArray *_filteredGradientColors;
    NSArray *_gradientLocations;
    double _monochromeFraction;
}

@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double progress;
@property (readonly, nonatomic) long long filterStyle;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)shapeLayer;
- (id)device;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)_updatePath;
- (void)_updateGradient;
- (double)_shapeLineWidth;
- (struct CGPath { } *)_generatePath;
- (id)_normalizeGradientLocations:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupGradientLayer:(id)a0;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (BOOL)_shouldReverseGradient;
- (id)initForDevice:(id)a0 withFilterStyle:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (struct CGPoint { double x0; double x1; })pointAtProgress:(float)a0;
- (void)setGradientColors:(id)a0 locations:(id)a1;
- (void)unfreezeForTransaction;

@end
