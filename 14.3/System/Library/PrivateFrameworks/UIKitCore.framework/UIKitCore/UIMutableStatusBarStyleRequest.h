@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (nonatomic) long long style;
@property (nonatomic) long long legibilityStyle;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) double foregroundAlpha;
@property (retain, nonatomic) NSNumber *overrideHeight;

- (void)setForegroundColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setForegroundAlpha:(double)a0;
- (void)setOverrideHeight:(id)a0;
- (void)setLegibilityStyle:(long long)a0;
- (void)setStyle:(long long)a0;

@end
