@class NSDictionary, NSDate;

@interface _GDSEmissionForecast : NSObject

@property (readonly, nonatomic) NSDate *generationDate;
@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) double refetchInterval;
@property (readonly, nonatomic) NSDictionary *forecastMap;

- (void).cxx_destruct;
- (id)initWithForecast:(id)a0 generatedAt:(id)a1 fetchedAt:(id)a2 refetchInterval:(double)a3;

@end
