@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallRingText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;

+ (id)templateWithTextProvider:(id)a0 fillFraction:(float)a1 ringStyle:(long long)a2;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)a0 fillFraction:(float)a1 ringStyle:(long long)a2;

@end
