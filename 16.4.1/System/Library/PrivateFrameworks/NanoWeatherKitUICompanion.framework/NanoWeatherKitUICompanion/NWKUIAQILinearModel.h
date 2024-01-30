@class NSArray, NSString;

@interface NWKUIAQILinearModel : NWKUIAQIModel

@property (readonly) NSArray *colorIndices;
@property (readonly) NSString *index;
@property (readonly) double percentage;

- (void).cxx_destruct;
- (id)initWithAirQualityConditions:(id)a0;
- (id)initWithName:(id)a0 label:(id)a1 categoryDescription:(id)a2 color:(id)a3 date:(id)a4 expiration:(id)a5 colorIndices:(id)a6 index:(id)a7 percentage:(double)a8;

@end
