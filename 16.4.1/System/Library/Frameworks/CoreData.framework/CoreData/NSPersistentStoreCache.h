@interface NSPersistentStoreCache : NSObject {
    id _externalData;
    unsigned long long _capacity;
    struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *_externalDataValueCallbacks;
    struct persistentStoreCacheFlags { unsigned char _preserveToManyRelationships : 1; unsigned int _reserved : 31; } _persistentStoreCacheFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (void)initialize;

- (id)initWithPersistentStore:(id)a0;
- (void)dealloc;
- (id)initWithValueCallbacks:(void *)a0 preserveToManyRelationships:(BOOL)a1;
- (id)init;

@end
