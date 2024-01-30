@class NSString;

@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying>

@property (readonly, nonatomic) float temperatureInMired;
@property (readonly, nonatomic) float temperatureInKelvin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTemperatureInKelvin:(float)a0;
- (id)hf_RGBColorRepresentation;
- (id)hf_temperatureColorRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithTemperatureInMired:(float)a0;
- (id)valueDescription;
- (id)valueDescriptionInKelvin;

@end
