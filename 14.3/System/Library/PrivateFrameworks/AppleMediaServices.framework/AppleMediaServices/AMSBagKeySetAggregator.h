@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject

@property (retain, nonatomic) NSMutableDictionary *bagKeySets;

- (BOOL)hasBagKeySetForConsumer:(Class)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generateAggregatedBagKeySet;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;

@end
