@class NSMapTable;

@interface REKeyValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)valueCount;
- (id)valueForKey:(id)a0;
- (void)removeKey:(id)a0;
- (id)keyForValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addKey:(id)a0 withValue:(id)a1;

@end
