@class NSDictionary, NSDate;

@interface _GDSEmissionHistory : NSObject

@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) NSDictionary *historicalMap;

- (void).cxx_destruct;
- (id)initWithHistoricalData:(id)a0 fetchedAt:(id)a1;

@end
