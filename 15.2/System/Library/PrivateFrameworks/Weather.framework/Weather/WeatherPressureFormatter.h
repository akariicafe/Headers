@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringFromMillibars:(float)a0;
- (void *)createNumberFormatter;
- (void)resetFormatter;
- (id)stringFromInchesHG:(float)a0;
- (int)pressureUnit;
- (float)convertMBarPressure:(float)a0 toUnit:(int)a1;
- (id)formatStringForPressure:(float)a0 inUnit:(int)a1;
- (id)fallbackStringForPressure:(float)a0;
- (float)convertInchesHGPressure:(float)a0 toUnit:(int)a1;
- (id)stringFromPressure:(float)a0 isDataMetric:(BOOL)a1;

@end
