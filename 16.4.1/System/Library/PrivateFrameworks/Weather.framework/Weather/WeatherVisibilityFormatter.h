@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)stringFromDistance:(double)a0 isDataMetric:(BOOL)a1;
- (id)stringFromKilometers:(double)a0;
- (id)stringFromMiles:(double)a0;

@end
