@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSMutableDictionary, NSDate, NSObject, NSOperationQueue;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSXPCListener *_xpcListener;
    NSXPCListener *_tokenListener;
    BOOL _unitTestMode;
    BOOL _resumed;
    NSObject<OS_dispatch_queue> *_xpcListenersReadyQueue;
    NSObject<OS_dispatch_queue> *_accountReadyQueue;
    NSObject<OS_dispatch_queue> *_accountResumedQueue;
    NSObject<OS_dispatch_queue> *_startupQueue;
    int _serverAvailabilityNotifyToken;
    NSObject<OS_dispatch_queue> *_accountLoaderQueue;
    NSMutableDictionary *_shareAcceptOperationsByToken;
    NSMutableDictionary *_shareAcceptWaitersByToken;
    NSObject<OS_dispatch_source> *_acceptWaiterTimer;
    NSOperationQueue *_shareAcceptQueue;
}

@property (nonatomic) BOOL disableAccountChangesHandling;
@property (nonatomic) BOOL disableAppsChangesHandling;
@property (nonatomic) unsigned long long forceIsGreedyState;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSDate *startupDate;
@property (retain, nonatomic) Class containerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemon;
+ (id)UTIForExtension:(id)a0;
+ (BOOL)isDaemonRunning;

- (BOOL)selfCheck:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)currentSession;
- (void)suspendIPCAcceptation;
- (void)_setupCacheDelete;
- (void)_startupAndLoadAccount;
- (void)dumpToContext:(id)a0;
- (id)currentAccountHandler;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerWaiterBlock:(id /* block */)a0 forShareURL:(id)a1;
- (BOOL)_haveRequiredKernelFeatures;
- (void)_initSignals;
- (void)start;
- (void)_finishStartup;
- (void)waitForConfiguration;
- (unsigned long long)nonPurgeableSizeForSession:(id)a0 givenPurgeableSize:(unsigned long long)a1;
- (void)waitOnAccountResumedQueue;
- (void).cxx_destruct;
- (id)init;
- (void)setUpSandbox;
- (void)_setDoneXpcActivity:(id)a0 description:(id)a1;
- (void)resumeIPCAcceptation;
- (void)exitWithCode:(int)a0;
- (void)_startXPCListeners;
- (void)localeDidChange;
- (void)performWithSessionForVolume:(id)a0 action:(id /* block */)a1;
- (id)registerShareAcceptOperation:(id)a0 forURL:(id)a1;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)_setupVNodeRapidAging;
- (void)handleExitSignal:(int)a0;
- (void)setUpAnonymousListener;
- (void)restart;
- (void)networkReachabilityFlagsChanged:(unsigned int)a0;

@end
