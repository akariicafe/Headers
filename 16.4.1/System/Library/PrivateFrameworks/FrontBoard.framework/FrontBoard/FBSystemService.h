@class FBServiceFacilityServer, NSString, FBSSerialQueue, BSServiceConnectionListener;
@protocol FBSApplicationInfoProvider, FBSystemServiceDelegate;

@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface> {
    BSServiceConnectionListener *_legacyOpenServiceListener;
    int _pendingExit;
    id<FBSApplicationInfoProvider> _lock_defaultInfoProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _defaultInfoProviderLock;
}

@property (retain, nonatomic) FBServiceFacilityServer *server;
@property (readonly, nonatomic) id<FBSApplicationInfoProvider> _applicationInfoProvider;
@property (readonly, nonatomic) FBSSerialQueue *queue;
@property (readonly, getter=isPendingExit) BOOL pendingExit;
@property (weak, nonatomic) id<FBSystemServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (oneway void)openApplication:(id)a0 withOptions:(id)a1 originator:(id)a2 requestID:(id)a3 completion:(id /* block */)a4;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)prepareDisplaysForExit;
- (void)shutdownAndReboot:(BOOL)a0;
- (void)setSystemIdleSleepDisabled:(BOOL)a0 forReason:(id)a1;
- (BOOL)_isAllowListedLaunchSuspendedApp:(id)a0;
- (void)_activateBundleID:(id)a0 requestID:(id)a1 isTrusted:(BOOL)a2 options:(id)a3 source:(id)a4 originalSource:(id)a5 withResult:(id /* block */)a6;
- (void)shutdownWithOptions:(unsigned long long)a0 forSource:(long long)a1;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)_performExitTasksForRelaunch:(BOOL)a0;
- (void)shutdownUsingOptions:(id)a0;
- (void)exitAndRelaunch:(BOOL)a0;
- (BOOL)_isTrustedRequest:(id)a0 forCaller:(id)a1 fromClient:(id)a2 forBundleInfo:(id)a3 withOptions:(id)a4 fatalError:(out id *)a5;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)a0;
- (void)setPendingExit:(BOOL)a0;
- (void)prepareForExitAndRelaunch:(BOOL)a0;
- (void)dealloc;
- (void)shutdownWithOptions:(unsigned long long)a0;
- (void)_reallyActivateApplication:(id)a0 requestID:(id)a1 options:(id)a2 source:(id)a3 originalSource:(id)a4 isTrusted:(BOOL)a5 sequenceNumber:(unsigned long long)a6 cacheGUID:(id)a7 ourSequenceNumber:(unsigned long long)a8 ourCacheGUID:(id)a9 withResult:(id /* block */)a10;
- (void)canOpenApplication:(id)a0 completion:(id /* block */)a1;
- (void)handleActions:(id)a0 source:(id)a1 withResult:(id /* block */)a2;
- (void)isPasscodeLockedOrBlockedWithResult:(id /* block */)a0;
- (id)init;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)shutdownWithOptions:(id)a0 origin:(id)a1;
- (BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)a0 clientCacheGUID:(id)a1 ourSequenceNumber:(unsigned long long)a2 ourCacheGUID:(id)a3;
- (void)exitAndRelaunch:(BOOL)a0 withOptions:(unsigned long long)a1;
- (void)_terminateProcesses:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_setInfoProvider;
- (id)initWithQueue:(id)a0;

@end
