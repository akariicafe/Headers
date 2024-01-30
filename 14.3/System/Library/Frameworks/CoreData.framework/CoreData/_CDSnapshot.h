@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (Class)classForEntity:(id)a0;
+ (id)alloc;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;
+ (void)_entityDeallocated;
+ (void)_invalidateStaticCaches;

- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)valueForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)copy;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
