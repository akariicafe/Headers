@class NSString, NSMutableDictionary, NSPersistentStore;

@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    BOOL _cachedStorePeerRanges;
}

@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSPersistentStore *privateStore;
@property (readonly, nonatomic) NSMutableDictionary *translatedGlobalIDs;

+ (void)initialize;
+ (long long)integerFromPrimaryKeyString:(id)a0;
+ (unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)a0;

- (void)dealloc;
- (BOOL)cachePeerRanges:(id *)a0;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)refreshPeerRangeCache:(id *)a0;
- (id)createGlobalObjectIDForManagedObjectID:(id)a0;
- (BOOL)cacheSQLCorePeerRange:(id)a0 error:(id *)a1;
- (id)cachedRangeForOwningPeerID:(id)a0 andEntityName:(id)a1 withPrimaryKey:(unsigned long long)a2;
- (id)cachedRangeForLocalPrimaryKey:(unsigned long long)a0 ofEntityNamed:(id)a1;
- (id)initWithPrivateStore:(id)a0 storeName:(id)a1 andLocalPeerID:(id)a2;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)a0 count:(long long)a1 error:(id *)a2;
- (unsigned long long)localPrimaryKeyForOwningPeerID:(id)a0 andEntityName:(id)a1 withPrimaryKey:(unsigned long long)a2;
- (id)describeCaches;
- (id)describeCachesVerbose;

@end
