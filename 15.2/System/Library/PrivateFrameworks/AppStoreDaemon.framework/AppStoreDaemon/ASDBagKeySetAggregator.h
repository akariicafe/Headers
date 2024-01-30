@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {
    NSMutableDictionary *_bagKeySets;
}

- (id)generateAggregatedBagKeySet;
- (BOOL)hasBagKeySetForConsumer:(Class)a0;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;
- (void).cxx_destruct;
- (id)init;

@end
