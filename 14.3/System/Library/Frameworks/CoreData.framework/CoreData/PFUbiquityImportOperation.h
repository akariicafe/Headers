@class NSString, PFUbiquityLocation, NSPersistentStore, NSObject, NSLock;

@interface PFUbiquityImportOperation : NSOperation {
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSPersistentStore *store;
@property NSObject *delegate;

- (void)cancel;
- (id)init;
- (void)dealloc;
- (id)initWithPersistentStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (id)retainedDelegate;
- (id)description;
- (void)lockDelegateLock;
- (void)storeWillBeRemoved:(id)a0;
- (void)unlockDelegateLock;
- (id)initWithStoreName:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;

@end
