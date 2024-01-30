@class NSIndexSet;

@interface TSUSparseArray : NSObject <NSCopying> {
    struct tsuSaPage { void /* function */ **x0; } *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long minKey;
@property (readonly) unsigned long long maxKey;
@property (readonly) NSIndexSet *populatedKeys;

+ (id)array;

- (id)objectForKey:(unsigned long long)a0;
- (void)clear;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(unsigned long long)a1;
- (void)foreach:(id /* block */)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (void)removeObjectForKey:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (unsigned long long)maxIndexForCurrentDepth;
- (void)increaseDepth;
- (BOOL)hasObjectForKey:(unsigned long long)a0;

@end
