@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet

@property (retain, nonatomic) NSMutableSet *mutableKeys;

- (void)unionBagKeySet:(id)a0;
- (id)keys;
- (void).cxx_destruct;
- (id)init;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;

@end
