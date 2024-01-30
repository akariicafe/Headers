@interface NSPersistentCacheRow : NSObject {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { unsigned char _invalidToOnes : 1; unsigned char _hasTemporaryID : 1; unsigned char _backgroundDealloc : 1; unsigned char _reservedFlags : 1; unsigned short _virtualfk_count : 14; unsigned short _ordkey_count : 14; } _externalRefFlags;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)releaseRelationshipCaches;
- (void)setAncillaryOrderKeys:(id)a0 forProperty:(id)a1 options:(unsigned int)a2 andTimestamp:(double)a3;
- (id)initWithOptions:(unsigned int)a0 andTimestamp:(double)a1;
- (void)setRelatedObjectIDs:(id)a0 forProperty:(id)a1 options:(unsigned int)a2 andTimestamp:(double)a3;
- (void)copyRelationshipCachesFrom:(id)a0;
- (int)decrementRefCount;
- (int)externalReferenceCount;
- (void)incrementRefCount;
- (double)timestampForProperty:(id)a0;
- (unsigned long long)toManyOffsetForProperty:(id)a0;
- (void)updateMissingRelationshipCachesFromOriginal:(id)a0;
- (id)ancillaryOrderKeysForProperty:(id)a0;
- (void)_initializeRelationshipCaches;
- (void)incrementExternalReferenceCount:(int)a0;
- (const id *)knownKeyValuesPointer;
- (double)timestamp;
- (id)objectID;
- (oneway void)release;
- (id)relatedObjectIDsForProperty:(id)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)version;
- (id)retain;
- (void)setTimestamp:(double)a0;
- (unsigned int)options;

@end
