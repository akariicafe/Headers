@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue;

+ (id)sharedManager;

- (void)syncUserKeysForService:(id)a0 context:(id)a1 bundleID:(id)a2 serviceIsManatee:(BOOL)a3 account:(id)a4 shouldThrottle:(BOOL)a5 testOverrideProvider:(id)a6 completionHandler:(id /* block */)a7;
- (void)getKeySyncEligibilityForService:(id)a0 isManatee:(BOOL)a1 zonePCSModificationDate:(id)a2 testOverrideProvider:(id)a3 completionHandler:(id /* block */)a4;
- (void)performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 completionHandler:(id /* block */)a4;
- (id)syncTrackerForService:(id)a0 manatee:(BOOL)a1 shortThrottlePeriod:(BOOL)a2;
- (id)createSyncTrackerForService:(id)a0 manatee:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
