@class NSMutableDictionary;

@interface IMMutableBagKeySet : AMSMutableBagKeySet

@property (retain, nonatomic) NSMutableDictionary *defaultValueMap;
@property (retain, nonatomic) NSMutableDictionary *valueTypeMap;

- (void).cxx_destruct;
- (id)init;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;

@end
