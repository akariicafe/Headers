@class NSString, NSLocale;

@interface WFTemperatureFormatter : NSFormatter

@property (nonatomic) struct UAMeasureFormat { } *measureFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) int inputUnit;
@property (nonatomic) int outputUnit;
@property (nonatomic) unsigned long long roundingMode;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) int symbolType;
@property (nonatomic) BOOL includeDegreeSymbol;

+ (id)temperatureFormatterWithInputUnit:(int)a0 outputUnit:(int)a1;

- (id)stringForObjectValue:(id)a0;
- (id)_formatTemperatureValue:(id)a0 toUnit:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_localeDidChangeNotification:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedStringFromTemperature:(id)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)formattedTemperatureFromString:(id)a0;

@end
