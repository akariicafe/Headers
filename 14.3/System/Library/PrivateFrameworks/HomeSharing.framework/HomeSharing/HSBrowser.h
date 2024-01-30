@class NSString, NSNetServiceBrowser, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HSBrowserDelegate;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

@property (retain, nonatomic) NSMutableArray *availableLibraries;
@property (retain, nonatomic) NSMutableArray *resolvingServices;
@property (retain, nonatomic) NSMutableArray *librariesPendingRemoval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSNetServiceBrowser *serviceBrowser;
@property (readonly, nonatomic) long long browserType;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (weak, nonatomic) id<HSBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeSharingBrowserWithGroupID:(id)a0;

- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)stop;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)start;
- (id)initWithBrowserType:(long long)a0 groupID:(id)a1;
- (void)_removalTimerFired:(id)a0;

@end
