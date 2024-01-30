@class NSString, NSNetServiceBrowser, NSThread, NSMutableArray;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableArray *_hostLibraryIdentifiers;
    NSMutableArray *_resolvingHosts;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;
    id /* block */ _completion;
    NSNetServiceBrowser *_browser;
    NSThread *_wakeThread;
    BOOL _searching;
    int _resolving;
    unsigned long long _hostsToResolve;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendWakeupCall:(id)a0;
+ (void)sendWakeupCallToAllSyncHosts;
+ (id)wakeableHostsWithCompletion:(id /* block */)a0;

- (void)wake;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)dealloc;
- (void)stop;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserDidStopSearch:(id)a0;

@end
