@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject

@property (retain, nonatomic) NSMutableDictionary *bagKeySets;

- (id)generateAggregatedBagKeySet;
- (BOOL)hasBagKeySetForConsumer:(Class)a0;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;
- (void).cxx_destruct;
- (id)init;

@end
