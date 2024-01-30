@class NSString, _MTLumaDodgePillLowQualityEffectView, MTLumaDodgePillSettings, NSMutableArray;
@protocol MTLumaDodgePillBackgroundLuminanceObserver;

@interface MTLumaDodgePillView : MTPillView <CAAnimationDelegate> {
    MTLumaDodgePillSettings *_settings;
    long long _graphicsQuality;
    double _luma;
    BOOL _lumaIsValid;
    _MTLumaDodgePillLowQualityEffectView *_lowQualityEffectView;
    unsigned int _bounceAnimationsInFlight;
    NSMutableArray *_bounceAnimationKeys;
}

@property (class, readonly, nonatomic) BOOL supportsBackgroundLuminanceObserving;

@property (nonatomic) long long style;
@property (weak, nonatomic) id<MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver;
@property (readonly, nonatomic) long long backgroundLuminance;
@property (nonatomic) long long backgroundLuminanceBias;
@property (readonly, nonatomic) double suggestedEdgeSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)layerClass;

- (void)bounce;
- (void)_updateStyle;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)dealloc;
- (BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)a0;
- (void)layoutSubviews;
- (void)backdropLayer:(id)a0 didChangeLuma:(double)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1 graphicsQuality:(long long)a2;
- (void)resetBackgroundLuminanceHysteresis;
- (struct CGSize { double x0; double x1; })suggestedSizeForContentWidth:(double)a0;

@end
