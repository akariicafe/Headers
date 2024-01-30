@class CKTestDevice, NSMutableDictionary, CKEntitlements, NSHashTable, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_containersRegisteredForAccountChangeNotifications;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    CKTestDevice *_testDevice;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_completedLongLivedOperationIDs;
    NSMutableSet *_outstandingOperationIDs;
}

+ (id)sharedManager;

- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (void)noteSystemIsAvailable;
- (void)connectionBecameInvalid:(id)a0;
- (void)clearFakeEntitlementForKey:(id)a0;
- (void).cxx_destruct;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (id)untrustedEntitlements;

@end
