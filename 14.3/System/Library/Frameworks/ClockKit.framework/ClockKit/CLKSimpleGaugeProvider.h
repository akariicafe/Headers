@interface CLKSimpleGaugeProvider : CLKGaugeProvider

@property (nonatomic) float fillFraction;

+ (BOOL)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColor:(id)a1 fillFraction:(float)a2;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 fillFraction:(float)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validate;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (double)progressFractionForNow:(id)a0;
- (BOOL)needsTimerUpdates;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)a0;

@end
