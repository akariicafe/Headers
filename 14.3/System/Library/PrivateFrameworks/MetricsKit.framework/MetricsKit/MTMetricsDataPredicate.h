@class NSDictionary;

@interface MTMetricsDataPredicate : NSObject

@property (retain, nonatomic) NSDictionary *fieldPredicates;

+ (id)predicateWithType:(id)a0 argument:(id)a1;
+ (id)predicateWithConfigData:(id)a0;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (BOOL)evaluateWithMetricsData:(id)a0;

@end
