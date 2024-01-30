@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)stringFromDistance:(double)a0 isDataMetric:(BOOL)a1;
- (id)stringFromKilometers:(double)a0;
- (id)stringFromMiles:(double)a0;

@end
