@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)stringFromInches:(double)a0;
- (id)init;
- (id)stringFromDistance:(double)a0 isDataMetric:(BOOL)a1;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (double)convertDistanceInImperial:(double)a0 to:(long long)a1;
- (double)convertDistanceInMetric:(double)a0 to:(long long)a1;
- (long long)precipitationUnit;
- (id)stringFromCentimeters:(double)a0;

@end
