@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {
    NSLock *_lock;
    NSArray *_accountProxies;
    int _lastSourceAccountManagementQueried;
    BOOL _registeredForNotifications;
    int _notifyToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)_deregisterForNotifications_nts;
- (void)_registerForNotifications_nts;
- (void)_resetAccountsChanged:(BOOL)a0;
- (id)accountProxiesOriginatingBundleID:(id)a0 sourceAccountManagement:(int)a1;

@end
