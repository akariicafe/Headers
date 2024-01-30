@class WUIDynamicWeatherBackgroundInteractiveTransaction, NSArray, UIImageView, WUIWeatherCondition, NSObject, WUIDynamicWeatherBackground;
@protocol OS_dispatch_source;

@interface WUIWeatherConditionBackgroundView : UIView {
    long long _activeIndex;
}

@property (retain, nonatomic) NSArray *cities;
@property (retain, nonatomic) WUIDynamicWeatherBackgroundInteractiveTransaction *crossfadeTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *crossfadeEffectTimer;
@property (retain, nonatomic) UIImageView *introductionImageView;
@property (retain, nonatomic) WUIWeatherCondition *leftCondition;
@property (retain, nonatomic) WUIWeatherCondition *rightCondition;
@property (readonly, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) WUIDynamicWeatherBackground *background;
@property (nonatomic) BOOL hidesConditions;
@property (nonatomic) BOOL hasViewAppeared;
@property (nonatomic) double scrollOffset;

- (void)setCities:(id)a0 activeCityIndex:(long long)a1 activeCityLiveConditionOnly:(BOOL)a2 animationDuration:(double)a3;
- (void)_setCondition:(id)a0 atIndex:(unsigned long long)a1;
- (id)_conditions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareToResume;
- (void)animateTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCities:(id)a0 activeCityIndex:(long long)a1 animationDuration:(double)a2;
- (void)useConditionView:(id)a0 activeCityIndex:(unsigned long long)a1;
- (void)setScrollEnded;
- (void)_cityDidUpdate:(id)a0;
- (void)setCities:(id)a0 activeCityIndex:(long long)a1;
- (void)updateConditionsAboutCityIndex:(long long)a0;
- (void)layoutSubviews;
- (void)prepareToSuspend;
- (void)updateConditionIfNeededWithCities:(id)a0 activeCityIndex:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_removeSideLayers;
- (void)saveImageForKeyCondition;
- (void)didTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (id)_conditionAtIndex:(unsigned long long)a0;
- (void)_addBackAllLayers;
- (id)relinquishConditionViewForCityAtIndex:(long long)a0;

@end
