@class NSMutableArray;

@interface CKOrderedDictionary : NSObject {
    NSMutableArray *tuples;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)orderedDictionaryWithCapacity:(unsigned long long)a0;
+ (id)orderedDictionary;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (id)dictionaryRepresentationRecursive:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0 forKey:(id)a1;

@end
