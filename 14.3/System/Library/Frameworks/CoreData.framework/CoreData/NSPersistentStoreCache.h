@interface NSPersistentStoreCache : NSObject {
    id _externalData;
    unsigned long long _capacity;
    struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *_externalDataValueCallbacks;
    struct persistentStoreCacheFlags { unsigned char _preserveToManyRelationships : 1; unsigned int _reserved : 31; } _persistentStoreCacheFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (void)initialize;

- (void)_registerRow:(id)a0 forObjectID:(id)a1 options:(unsigned int)a2;
- (id)rowForObjectID:(id)a0;
- (id)init;
- (id)toManyForSourceObjectID:(id)a0 forProperty:(id)a1 afterTimestamp:(double)a2;
- (void)_registerToMany:(id)a0 withOrderKeys:(id)a1 forSourceObjectID:(id)a2 forProperty:(id)a3 options:(unsigned int)a4 andTimestamp:(double)a5;
- (id)rowForObjectID:(id)a0 afterTimestamp:(double)a1;
- (void)dealloc;
- (void)registerToMany:(id)a0 withOrderKeys:(id)a1 forSourceObjectID:(id)a2 forProperty:(id)a3 options:(unsigned int)a4 andTimestamp:(double)a5;
- (void)registerToMany:(id)a0 withOrderKeys:(id)a1 forSourceObjectID:(id)a2 forProperty:(id)a3 andTimestamp:(double)a4;
- (void)incrementRefCountForObjectID:(id)a0;
- (id)initWithValueCallbacks:(void *)a0 preserveToManyRelationships:(BOOL)a1;
- (void)registerRow:(id)a0 forObjectID:(id)a1 options:(unsigned int)a2;
- (unsigned long long)allCachedRowsCount;
- (int)refCountForObjectID:(id)a0;
- (void)_forgetRowForObjectID:(id)a0;
- (id)initWithPersistentStore:(id)a0;
- (void)forgetRowForObjectID:(id)a0;
- (void)_createExternalDataDictWithValueCallbacks:(void *)a0;
- (void)growRegistrationCollectionTo:(unsigned long long)a0;
- (id)ancillaryOrderKeysForSourceObjectID:(id)a0 forProperty:(id)a1 afterTimestamp:(double)a2;
- (void)registerRow:(id)a0 forObjectID:(id)a1;
- (id)toManyInformationForSourceObjectID:(id)a0 forProperty:(id)a1 afterTimestamp:(double)a2;
- (void)forgetAllExternalData;
- (void)decrementRefCountForObjectID:(id)a0;

@end
