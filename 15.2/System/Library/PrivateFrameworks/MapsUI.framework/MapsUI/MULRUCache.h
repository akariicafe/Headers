@class NSArray, NSMutableArray;
@protocol MULRUCacheDelegate;

@interface MULRUCache : NSObject {
    NSMutableArray *_keys;
    NSMutableArray *_values;
}

@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize;
@property (weak, nonatomic) id<MULRUCacheDelegate> delegate;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
