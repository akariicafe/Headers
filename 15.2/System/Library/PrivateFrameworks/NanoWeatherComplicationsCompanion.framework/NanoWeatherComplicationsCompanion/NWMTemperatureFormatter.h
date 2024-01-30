@class NSString, NSMeasurement, NSLocale, NSNumberFormatter, NSMeasurementFormatter;

@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter>

@property (class, readonly) NWMTemperatureFormatter *autoupdatingSharedFormatter;
@property (class, readonly, copy) NWMTemperatureFormatter *autoupdatingFormatter;

@property (getter=isCelsiusPreferred) BOOL celsiusPreferred;
@property (getter=shouldAvoidDegreeSymbolOnly) BOOL avoidDegreeSymbolOnly;
@property (retain) NSLocale *locale;
@property (readonly, nonatomic) int temperatureUnit;
@property (retain, nonatomic) NSMeasurement *noMeasurement;
@property (retain, nonatomic) NSNumberFormatter *noUnitFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *degreeSymbolOnlyFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *unitFormatter;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbol;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnit;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnitRoundedVariant;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnit;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (void)_localeChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)_value:(id)a0;
- (id)formattedWithDegreeSymbol:(id)a0 style:(unsigned long long)a1 fallbackStyle:(unsigned long long)a2;
- (id)formattedWithDegreeSymbol:(id)a0 fallbackStyle:(unsigned long long)a1;
- (id)formattedWithoutUnit:(id)a0;
- (id)formattedWithoutUnit:(id)a0 style:(unsigned long long)a1;
- (id)initWithLocale:(id)a0 temperatureUnit:(int)a1;
- (void)reloadWithLocale:(id)a0;
- (id)formattedWithUnit:(id)a0;
- (id)_measurementForTemperature:(id)a0;
- (id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)a0;
- (id)formattedWithUnit:(id)a0 style:(unsigned long long)a1;
- (id)_formattedStaleTemperatureWithUnit:(unsigned long long)a0;
- (id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)a0;

@end
