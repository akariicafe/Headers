@class UIColor, UIFont, NSString, NSDate;

@interface PRPosterPreferencesImpl : NSObject <PRPosterRenderingPreferences, PRMutablePosterRenderingPreferences, PRPosterEditingPreferences, PRMutablePosterEditingPreferences> {
    UIFont *_timeFont;
    UIColor *_timeColor;
    UIColor *_statusBarTintColor;
    unsigned long long _significantEventTime;
    unsigned long long _significantEventOptions;
    BOOL _handlesWakeAnimation;
    BOOL _depthEffectEnabled;
    BOOL _parallaxEnabled;
    UIColor *_averageColor;
}

@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) unsigned long long significantEventTime;
@property (readonly, nonatomic) unsigned long long significantEventOptions;
@property (readonly, nonatomic) BOOL handlesWakeAnimation;
@property (readonly, nonatomic) NSDate *nextWakeDate;
@property (readonly, nonatomic) UIFont *timeFont;
@property (readonly, nonatomic) UIColor *timeColor;
@property (readonly, nonatomic) UIColor *statusBarTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDepthEffectEnabled) BOOL depthEffectEnabled;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;

- (void)setParallaxEnabled:(BOOL)a0;
- (void)applyToClientSettings:(id)a0;
- (void)setDepthEffectEnabled:(BOOL)a0;
- (void)setTimeFont:(id)a0;
- (void)setNextWakeDate:(id)a0;
- (void)setSignificantEventOptions:(unsigned long long)a0;
- (void)setHandlesWakeAnimation:(BOOL)a0;
- (void)setStatusBarTintColor:(id)a0;
- (void)setAverageColor:(id)a0;
- (id)init;
- (void)setTimeColor:(id)a0;
- (id)_initFromPreferences:(id)a0;
- (void)setSignificantEventTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
