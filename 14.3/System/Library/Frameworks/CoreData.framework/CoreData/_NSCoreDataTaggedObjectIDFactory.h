@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id _fallbackFactories;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)_setStoreInfo1:(id)a0;
- (id)alloc;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithPK64:(long long)a0;
- (id)_fallbackFactory;
- (id)_storeInfo1;
- (id)retain;
- (id)managedObjectIDFromURIRepresentation:(id)a0;
- (void)_storeDeallocated;
- (void)setObjectStoreIdentifier:(id)a0;
- (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;

@end
