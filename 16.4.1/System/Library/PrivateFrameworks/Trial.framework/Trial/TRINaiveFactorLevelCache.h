@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    NSDictionary *_factorLevels;
}

- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (id)initWithFactorLevels:(id)a0;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
