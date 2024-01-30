@class NSMapTable;

@interface REKeyValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)valueCount;
- (void)addKey:(id)a0 withValue:(id)a1;
- (id)keyForValue:(id)a0;

@end
