@class NSString, _PASLock;

@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)a0;
- (id)blacklistedBundleIds;
- (BOOL)_updateBlacklistWithNewBlacklistedBundleIds:(id)a0 whitelistedBundleIds:(id)a1;

@end
