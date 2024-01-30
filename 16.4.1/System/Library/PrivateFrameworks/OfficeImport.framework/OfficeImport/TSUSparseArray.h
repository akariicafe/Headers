@interface TSUSparseArray : NSObject <NSCopying> {
    struct tsuSaPage { void /* function */ **x0; } *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned long long count;

+ (id)array;

- (void)setObject:(id)a0 forKey:(unsigned long long)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)removeObjectForKey:(unsigned long long)a0;
- (id)objectForKey:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)foreach:(id /* block */)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)description;
- (void)clear;
- (BOOL)hasObjectForKey:(unsigned long long)a0;
- (void)increaseDepth;
- (unsigned long long)maxIndexForCurrentDepth;

@end
