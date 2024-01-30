@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject {
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)sharedService;
+ (id)clientCallbackQueue;

- (id)systemApplicationBundleIdentifier;
- (void)shutdownWithOptions:(id)a0;
- (void)shutdown;
- (void)setKeyboardFocusApplicationPID:(int)a0 completion:(id /* block */)a1;
- (id)init;
- (id)badgeValueForBundleID:(id)a0;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void).cxx_destruct;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (void)setBadgeValue:(id)a0 forBundleID:(id)a1;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (unsigned int)createClientPort;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (int)pidForApplication:(id)a0;
- (void)sendActions:(id)a0 withResult:(id /* block */)a1;
- (void)cleanupClientPort:(unsigned int)a0;
- (void)reboot;
- (void)setKeyboardFocusApplicationPID:(int)a0 deferringToken:(id)a1 completion:(id /* block */)a2;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (void)dataResetWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (BOOL)isPasscodeLockedOrBlocked;
- (void)setKeyboardFocusApplicationWithBundleID:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (id)processHandleForApplication:(id)a0;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;

@end
