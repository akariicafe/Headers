@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

+ (id)stringValueFromArray:(id)a0 atIndexDescribedByStringNumber:(id)a1;

- (id)initWithLocalPeerID:(id)a0 forStoreName:(id)a1;
- (id)init;
- (void)dealloc;

@end
