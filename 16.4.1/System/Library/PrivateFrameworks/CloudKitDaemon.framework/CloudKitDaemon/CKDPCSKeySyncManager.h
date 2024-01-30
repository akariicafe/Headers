@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceNameByAccount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_getKeySyncTrackerByServicenameForAccount:(id)a0;
- (id)createSyncTrackerForAccount:(id)a0 service:(id)a1 manatee:(BOOL)a2;
- (void)getKeySyncEligibilityForService:(id)a0 isManatee:(BOOL)a1 account:(id)a2 lastModifiedDate:(id)a3 testOverrideProvider:(id)a4 completionHandler:(id /* block */)a5;
- (void)performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 completionHandler:(id /* block */)a4;
- (id)syncTrackerForAccount:(id)a0 service:(id)a1 manatee:(BOOL)a2 shortThrottlePeriod:(BOOL)a3;
- (void)syncUserKeysForService:(id)a0 context:(id)a1 bundleID:(id)a2 serviceIsManatee:(BOOL)a3 account:(id)a4 shouldThrottle:(BOOL)a5 testOverrideProvider:(id)a6 completionHandler:(id /* block */)a7;

@end
