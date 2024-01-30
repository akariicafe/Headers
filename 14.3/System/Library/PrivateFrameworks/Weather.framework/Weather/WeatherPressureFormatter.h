@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)stringFromMillibars:(float)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (void *)createNumberFormatter;
- (float)convertInchesHGPressure:(float)a0 toUnit:(int)a1;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringFromInchesHG:(float)a0;
- (void)resetFormatter;
- (id)stringFromPressure:(float)a0 isDataMetric:(BOOL)a1;
- (float)convertMBarPressure:(float)a0 toUnit:(int)a1;
- (id)fallbackStringForPressure:(float)a0;
- (id)formatStringForPressure:(float)a0 inUnit:(int)a1;
- (int)pressureUnit;

@end
