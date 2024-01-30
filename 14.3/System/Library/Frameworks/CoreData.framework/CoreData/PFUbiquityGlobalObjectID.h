@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) NSString *primaryKey;
@property (readonly, nonatomic) NSString *owningPeerID;
@property (readonly, nonatomic) unsigned long long hash;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly, nonatomic) unsigned long long primaryKeyInteger;

- (id)initFromCopyWithStoreName:(id)a0 entityName:(id)a1 primaryKey:(id)a2 peerID:(id)a3 andHash:(unsigned long long)a4 managedObjectID:(id)a5 primaryKeyInteger:(unsigned long long)a6;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (void)updateHash;
- (long long)compare:(id)a0;
- (id)description;
- (id)createGlobalIDString;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreName:(id)a0 entityName:(id)a1 primaryKeyInteger:(unsigned long long)a2 andPeerID:(id)a3;
- (id)initWithStoreName:(id)a0 entityName:(id)a1 primaryKey:(id)a2 andPeerID:(id)a3;
- (id)initWithCompressedString:(id)a0 forStoreWithName:(id)a1 andEntityNames:(id)a2 primaryKeys:(id)a3 peerIDs:(id)a4;
- (id)createCompressedStringWithEntityNameToIndex:(id)a0 primaryKeyToIndex:(id)a1 peerIDToIndex:(id)a2;

@end
