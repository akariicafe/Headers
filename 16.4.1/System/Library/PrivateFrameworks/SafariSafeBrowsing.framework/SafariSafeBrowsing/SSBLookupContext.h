@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver> {
    struct shared_ptr<SafeBrowsing::LookupContext> { struct LookupContext *__ptr_; struct __shared_weak_count *__cntrl_; } _lookupContext;
    unsigned int _observerToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLookupContext;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)lookUpURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(id /* block */)a0;
- (void)_deleteAllDatabasesWithCompletionHandler:(id /* block */)a0;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)a0;
- (void)_forceDatabaseUpdateWithCompletionHandler:(id /* block */)a0;
- (void)_forceDeviceIdentificationTokenUpdateWithCompletionHandler:(id /* block */)a0;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(id /* block */)a0;
- (void)_forceLookUpURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getDatabaseStatusWithCompletionHandler:(id /* block */)a0;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:(id /* block */)a0;
- (void)_getSafeBrowsingEnabledState:(id /* block */)a0;
- (void)_getServiceStatusWithCompletionHandler:(id /* block */)a0;
- (void)_lookUpURL:(id)a0 ignoreEnableState:(int)a1 completionHandler:(id /* block */)a2;
- (void)_lookUpURLs:(id)a0 forProtectionType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_setSafeBrowsingEnabledStateNeedsUpdate;

@end
