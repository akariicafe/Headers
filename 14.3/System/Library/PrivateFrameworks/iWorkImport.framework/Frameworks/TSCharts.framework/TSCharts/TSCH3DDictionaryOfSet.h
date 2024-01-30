@class NSMutableDictionary;

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration> {
    NSMutableDictionary *mSets;
}

+ (id)dictionary;
+ (id)dictionaryWithMutableDictionaryClass:(Class)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)allKeys;
- (unsigned long long)count;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)initWithMutableDictionaryClass:(Class)a0;

@end
