@class CLKTextProvider;

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate {
    long long _family;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (nonatomic) double level;
@property (nonatomic) BOOL charging;

+ (id)templateWithFamily:(long long)a0 textProvider:(id)a1 level:(double)a2 charging:(BOOL)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithFamily:(long long)a0 textProvider:(id)a1 level:(double)a2 charging:(BOOL)a3;

@end
