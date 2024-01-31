@interface CLKSimpleGaugeProvider : CLKGaugeProvider

@property (nonatomic) float fillFraction;

+ (BOOL)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColor:(id)a1 fillFraction:(float)a2;
+ (id)gaugeProviderWithStyle:(long long)a0 gaugeColors:(id)a1 gaugeColorLocations:(id)a2 fillFraction:(float)a3;

- (BOOL)validate;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)a0;
- (double)progressFractionForNow:(id)a0;
- (void)stopUpdatesForToken:(id)a0;
- (BOOL)needsTimerUpdates;

@end
