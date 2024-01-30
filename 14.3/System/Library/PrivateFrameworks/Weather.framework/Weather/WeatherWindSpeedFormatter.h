@class NSDictionary, NSLocale;

@interface WeatherWindSpeedFormatter : NSFormatter

@property (retain) NSLocale *locale;
@property (retain) NSDictionary *directionSubstringAttributes;

+ (id)convenienceFormatter;

- (id)fallbackUnitString;
- (double)speedByConvertingToUserUnit:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)templateStringForSpeed:(float)a0 direction:(float)a1;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)formattedStringForSpeed:(float)a0 direction:(float)a1 shortDescription:(BOOL)a2;
- (id)stringForWindDirection:(float)a0 shortDescription:(BOOL)a1;
- (id)stringForWindSpeed:(float)a0;
- (id)attributedFormattedStringForSpeed:(float)a0 direction:(float)a1;
- (int)windSpeedUnit;
- (id)formattedStringForSpeed:(float)a0 direction:(float)a1;
- (id)speedStringByConvertingToUserUnits:(float)a0;
- (id)fallbackStringForWindSpeed:(float)a0;

@end
