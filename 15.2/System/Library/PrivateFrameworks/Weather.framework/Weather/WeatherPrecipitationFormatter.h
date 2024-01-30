@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromDistance:(double)a0 isDataMetric:(BOOL)a1;
- (long long)precipitationUnit;
- (double)convertDistanceInMetric:(double)a0 to:(long long)a1;
- (double)convertDistanceInImperial:(double)a0 to:(long long)a1;
- (id)stringFromCentimeters:(double)a0;
- (id)stringFromInches:(double)a0;

@end
