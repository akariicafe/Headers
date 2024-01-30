@interface HFTemperatureItemUtilities : NSObject

+ (id)currentHeatingCoolingModeValueInResponse:(id)a0;
+ (id)targetHeatingCoolingModeValueInResponse:(id)a0;
+ (id)targetTemperatureValueInResponse:(id)a0;
+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)a0 isActive:(BOOL)a1;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)a0 isActive:(BOOL)a1;
+ (id)integerTemperatureRangeWithinNumberRange:(id)a0 representsCelsius:(BOOL)a1;

@end
