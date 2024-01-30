@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long keyCount;
@property (readonly, nonatomic) unsigned long long valueCount;

- (void)removeKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)keyForValue:(id)a0;
- (id)initWithValuePointFunctionOptions:(unsigned long long)a0;
- (id)valuesForKey:(id)a0;
- (void)addKey:(id)a0 withValues:(id)a1;
- (void)insertValue:(id)a0 forKey:(id)a1;
- (void)removeValue:(id)a0 forKey:(id)a1;
- (void)enumerateValuesForKey:(id)a0 usingBlock:(id /* block */)a1;

@end
