@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (void)initialize;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForEntity:(id)a0;
+ (void)_invalidateStaticCaches;
+ (void)_entityDeallocated;

- (id)valueForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)mutableCopy;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
