@class NSNumber, NSString;

@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver>

@property (nonatomic) BOOL inputIsCelsius;
@property (nonatomic) BOOL outputIsCelsius;
@property (retain, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaximumFractionDigits:(unsigned long long)a0;
- (void)setMinimumFractionDigits:(unsigned long long)a0;
- (unsigned long long)maximumFractionDigits;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)minimumFractionDigits;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnit:(BOOL)a1;
- (id)stringForObjectValue:(id)a0;

@end
