@class UIColor;

@interface NTKUpNextBezelComplicationView : NTKUpNextComplicationView

@property (readonly, nonatomic) double bezelLabelCircularRadius;
@property (readonly, nonatomic) long long theme;
@property (readonly, nonatomic) UIColor *bezelTextColor;
@property (readonly, nonatomic) double currentBezelTextWidth;

- (void).cxx_destruct;
- (void)setTheme:(long long)a0;
- (void)setBezelTextColor:(id)a0;
- (void)setBezelLabelCircularRadius:(double)a0;
- (void)_setView:(id)a0 forSideAtIndex:(long long)a1;
- (void)_enumerateBezelViewsWithBlock:(id /* block */)a0;

@end
