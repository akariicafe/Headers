@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSString *localPeerID;

+ (id)stringValueFromArray:(id)a0 atIndexDescribedByStringNumber:(id)a1;

- (id)init;
- (void)dealloc;
- (void)purgeCache;
- (id)initWithLocalPeerID:(id)a0 forStoreName:(id)a1;
- (id)createGlobalIDForCompressedString:(id)a0 withEntityNames:(id)a1 primaryKeys:(id)a2 peerIDs:(id)a3;
- (id)createGlobalIDForGlobalIDString:(id)a0;
- (id)createGlobalIDForPrimaryKeyString:(id)a0 entityName:(id)a1 andOwningPeerID:(id)a2;
- (id)createGlobalIDForPrimarKey:(unsigned long long)a0 entityName:(id)a1 andOwningPeerID:(id)a2;

@end
