@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet

@property (retain, nonatomic) NSMutableSet *mutableKeys;

- (id)keys;
- (id)init;
- (void).cxx_destruct;
- (void)unionBagKeySet:(id)a0;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;

@end
