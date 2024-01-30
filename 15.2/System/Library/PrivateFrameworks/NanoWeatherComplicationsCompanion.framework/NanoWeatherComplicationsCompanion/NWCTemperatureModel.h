@class NSString, UIColor, NSArray;

@interface NWCTemperatureModel : NSObject

@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) NSString *localizedTemperatureCurrent;
@property (readonly, nonatomic) NSString *localizedTemperatureHigh;
@property (readonly, nonatomic) UIColor *tintColorHigh;
@property (readonly, nonatomic) NSString *localizedTemperatureLow;
@property (readonly, nonatomic) UIColor *tintColorLow;
@property (readonly, nonatomic) NSArray *spectrum;
@property (readonly, nonatomic) NSArray *spectrumTicks;

+ (id)temperatureModelForCurrentObservation:(id)a0 dailyForecastedConditions:(id)a1 temperatureFormatter:(id)a2 shouldUseNoUnitCurrentTemperature:(BOOL)a3;

- (void).cxx_destruct;

@end
