@class NSArray, NSMutableDictionary;

@interface BMRuleExtractor : NSObject

@property (retain, nonatomic) NSMutableDictionary *patterns;
@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned long long basketCount;
@property BOOL shouldStop;

- (void).cxx_destruct;
- (void)extractRulesWithMinSupport:(unsigned long long)a0 minConfidence:(double)a1 targetTypes:(id)a2 batchSize:(unsigned long long)a3 currentDate:(id)a4 datedBaskets:(id)a5 handler:(id /* block */)a6;
- (void)extractRulesWithMinSupport:(unsigned long long)a0 minConfidence:(double)a1 targetTypes:(id)a2 batchSize:(unsigned long long)a3 handler:(id /* block */)a4;
- (id)initWithPatterns:(id)a0 items:(id)a1 basketCount:(unsigned long long)a2;
- (id)itemSetForItemIndexSet:(id)a0;
- (id)subsetsOfItemset:(id)a0;
- (unsigned long long)supportOfItemSet:(id)a0;
- (void)terminateEarly;

@end
