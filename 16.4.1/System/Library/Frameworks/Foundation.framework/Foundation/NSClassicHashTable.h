@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)removeItem:(const void *)a0;
- (void)addObject:(id)a0;
- (void)removeAllItems;
- (unsigned long long)count;
- (void)insertItem:(const void *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (unsigned long long)hash;
- (id)copy;
- (id)allObjects;
- (void *)getItem:(const void *)a0;
- (id)init;
- (void)insertKnownAbsentItem:(const void *)a0;
- (id)description;

@end
