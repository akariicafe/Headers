@class NSString, _PASLock;

@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)blacklistedBundleIds;
- (void).cxx_destruct;
- (id)init;
- (void)deviceManagementPolicyDidChange:(id)a0;
- (BOOL)_updateBlacklistWithNewBlacklistedBundleIds:(id)a0 whitelistedBundleIds:(id)a1;
- (void)dealloc;

@end
