@class NSLocale;

@interface WeatherUI.VisibilityFormatter : NSMeasurementFormatter

@property (nonatomic, copy) NSLocale *locale;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
