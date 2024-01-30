@class WUIGradientLayer, WUIWeatherCondition, CALayer, NSNumber, NSCache;

@interface WUIDynamicWeatherBackground : UIView

@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) WUIGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *darkeningLayer;
@property (retain, nonatomic) NSCache *backgroundCache;
@property (weak, nonatomic) CALayer *currentBackground;
@property (weak, nonatomic) CALayer *transitionBackground;
@property (copy, nonatomic) NSNumber *sunHeightOverride;
@property (retain, nonatomic) WUIWeatherCondition *condition;

+ (void)initialize;
+ (id)dequeueBackgroundForCity:(id)a0;
+ (void)endReuseRestriction;
+ (void)enqueueBackground:(id)a0;
+ (void)beginReuseRestrictionForCity:(id)a0;
+ (void)handleMemoryWarning;

- (void)setCity:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)imageLayerFromConditon:(long long)a0 isDay:(BOOL)a1;
- (void)addSublayer:(id)a0;
- (void)updateForDarkerSystemColors;
- (void).cxx_destruct;
- (id)springAnimationForKeyPath:(id)a0 mass:(double)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)animateTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)getTopColor:(id *)a0 middleColor:(id *)a1 bottomColor:(id *)a2 gradientStopPoint:(double *)a3 forCity:(id)a4 date:(id)a5;
- (double)darkeningLayerOpacityForDay:(BOOL)a0;
- (BOOL)hasSublayer:(id)a0;
- (void)completeTransitionWithSuccess:(BOOL)a0;
- (id)updateFromCity:(id)a0 toCity:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCity:(id)a0 animationDuration:(double)a1;
- (void)darkerSystemColorsStatusDidChange:(id)a0;
- (void)setCity:(id)a0 animate:(BOOL)a1;

@end
