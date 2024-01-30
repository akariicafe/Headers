@class NSNumber;

@interface EDAMPricingModel : FATObject

@property (retain, nonatomic) NSNumber *gnomeActive;
@property (retain, nonatomic) NSNumber *gnomeWarmingPeriod;
@property (retain, nonatomic) NSNumber *pricingModelStart;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
