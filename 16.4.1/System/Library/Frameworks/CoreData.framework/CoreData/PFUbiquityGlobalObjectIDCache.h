@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

+ (id)stringValueFromArray:(id)a0 atIndexDescribedByStringNumber:(id)a1;

- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)a0 forStoreName:(id)a1;

@end
