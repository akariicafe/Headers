@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long keyCount;
@property (readonly, nonatomic) unsigned long long valueCount;

- (id)initWithValuePointFunctionOptions:(unsigned long long)a0;
- (void)removeKey:(id)a0;
- (id)keyForValue:(id)a0;
- (void)enumerateValuesForKey:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeValue:(id)a0 forKey:(id)a1;
- (void)insertValue:(id)a0 forKey:(id)a1;
- (id)valuesForKey:(id)a0;
- (void)addKey:(id)a0 withValues:(id)a1;

@end
