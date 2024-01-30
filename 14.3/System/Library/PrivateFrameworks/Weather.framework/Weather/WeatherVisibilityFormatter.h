@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)init;
- (id)stringFromDistance:(double)a0 isDataMetric:(BOOL)a1;
- (void).cxx_destruct;
- (id)stringFromMiles:(double)a0;
- (id)stringFromKilometers:(double)a0;

@end
