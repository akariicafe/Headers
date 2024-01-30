@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface APOrderedMutableDictionary : NSObject {
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_mutableOrderedSet;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id firstKey;
@property (readonly, nonatomic) id lastObject;
@property (readonly, nonatomic) id lastKey;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allKeys;

+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionary;

- (BOOL)containsKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)enumerateKeysUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
