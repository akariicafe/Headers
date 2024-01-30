@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor>

@property (readonly, nonatomic) NSString *formattedTemperature;
@property (readonly, nonatomic) long long heatingCoolingMode;
@property (readonly, nonatomic) long long targetHeatingCoolingMode;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormattedTemperature:(id)a0 heatingCoolingMode:(long long)a1 targetHeatingCoolingMode:(long long)a2;

@end
