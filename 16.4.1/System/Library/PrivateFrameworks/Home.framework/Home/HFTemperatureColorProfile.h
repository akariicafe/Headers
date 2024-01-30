@class NSString;

@interface HFTemperatureColorProfile : NSObject <HFColorProfile>

@property (readonly, nonatomic) float minimumTemperature;
@property (readonly, nonatomic) float maximumTemperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adjustedColorPrimitiveForPrimitive:(id)a0;
- (float)adjustedTemperatureForTemperature:(float)a0;
- (id)initWithMinimumTemperature:(float)a0 maximumTemperature:(float)a1;

@end
