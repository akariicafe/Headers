@class NSArray, WFTemperature, NSString;

@interface NWMTemperatureColorIndex : NWKUIColorIndex <NWKUIColorIndexable>

@property (class, readonly, nonatomic) NSArray *allIndices;

@property (readonly, nonatomic) WFTemperature *temperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexWithTemperature:(id)a0 color:(id)a1;

- (void).cxx_destruct;
- (id)initWithTemperature:(id)a0 color:(id)a1;

@end
