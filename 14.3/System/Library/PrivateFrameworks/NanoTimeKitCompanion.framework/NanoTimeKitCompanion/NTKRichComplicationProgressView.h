@class NSNumber, NTKRichComplicationShapeView, NSArray, NSString, UIView, CLKDevice, CLKGaugeProvider;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {
    long long _family;
    CLKDevice *_device;
    NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
}

@property (readonly, nonatomic) NTKRichComplicationShapeView *backgroundView;
@property (readonly, nonatomic) NTKRichComplicationShapeView *foregroundView;
@property (readonly, nonatomic) UIView *ringView;
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

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (void)_createRingView;
- (void)_applyStyle;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0 locations:(id)a1;
- (void)setGradientColors:(id)a0 locations:(id)a1;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)a0 duration:(double)a1;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)a0;
- (id)initForFamily:(long long)a0 device:(id)a1 backgroundShapeView:(id)a2 foregroundShapeView:(id)a3;

@end
