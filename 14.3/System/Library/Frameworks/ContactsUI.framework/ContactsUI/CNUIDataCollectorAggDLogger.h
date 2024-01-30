@interface CNUIDataCollectorAggDLogger : NSObject

+ (id)logger;

- (void)setValue:(long long)a0 forScalarKey:(id)a1;
- (void)addValue:(long long)a0 forScalarKey:(id)a1;
- (void)setValue:(double)a0 forDistributionKey:(id)a1;

@end
