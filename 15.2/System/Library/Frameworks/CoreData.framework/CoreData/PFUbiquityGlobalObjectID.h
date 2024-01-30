@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {
    NSString *_storeName;
    NSString *_entityName;
    NSString *_primaryKey;
    NSString *_owningPeerID;
    NSManagedObjectID *_managedObjectID;
    unsigned long long _primaryKeyInteger;
}

@property (readonly, nonatomic) unsigned long long hash;

- (long long)compare:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithStoreName:(id)a0 entityName:(id)a1 primaryKeyInteger:(unsigned long long)a2 andPeerID:(id)a3;
- (id)initWithStoreName:(id)a0 entityName:(id)a1 primaryKey:(id)a2 andPeerID:(id)a3;
- (id)initWithCompressedString:(id)a0 forStoreWithName:(id)a1 andEntityNames:(id)a2 primaryKeys:(id)a3 peerIDs:(id)a4;
- (void)updateHash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
