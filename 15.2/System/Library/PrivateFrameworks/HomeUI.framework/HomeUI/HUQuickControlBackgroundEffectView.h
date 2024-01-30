@interface HUQuickControlBackgroundEffectView : UIView

@property (readonly, nonatomic) unsigned long long effectType;

- (void)tintColorDidChange;
- (void)_configureForCurrentEffectType;
- (id)initWithEffectType:(unsigned long long)a0;

@end
