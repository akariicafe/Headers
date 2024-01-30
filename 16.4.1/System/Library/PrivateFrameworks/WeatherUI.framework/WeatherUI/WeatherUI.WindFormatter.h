@class NSLocale;

@interface WeatherUI.WindFormatter : NSMeasurementFormatter

@property (nonatomic, copy) NSLocale *locale;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
