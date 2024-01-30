@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    NSDictionary *_factorLevels;
}

- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFactorLevels:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
