@class UIView, NSString, NSArray, CLKDevice, CDRichComplicationShapeView, CAShapeLayer, CLKGaugeProvider, NSNumber;
@protocol CLKMonochromeFilterProvider;

@interface CDRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {
    long long _family;
    CLKDevice *_device;
    NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
}

@property (nonatomic) BOOL showHolePunch;
@property (nonatomic) BOOL showIndicatorView;
@property (nonatomic) BOOL showAlternateIndicatorColor;
@property (retain, nonatomic) UIView *indicatorView;
@property (readonly, nonatomic) CDRichComplicationShapeView *backgroundView;
@property (readonly, nonatomic) CDRichComplicationShapeView *foregroundView;
@property (readonly, nonatomic) UIView *ringView;
@property (readonly, nonatomic) CAShapeLayer *ringLayer;
@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double progress;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long style;
@property (retain, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_applyStyle;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)initForFamily:(long long)a0 device:(id)a1 backgroundShapeView:(id)a2 foregroundShapeView:(id)a3;
- (id)interpolatedColorForView:(id)a0;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0 locations:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)a0;
- (void)_updateRingShape;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)a0 duration:(double)a1;
- (void)setGradientColors:(id)a0 locations:(id)a1;

@end
