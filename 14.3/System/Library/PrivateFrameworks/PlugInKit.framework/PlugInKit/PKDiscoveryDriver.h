@class PKDiscoveryLSWatcher, NSSet, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (retain) NSDictionary *attributes;
@property unsigned long long flags;
@property (copy) id /* block */ report;
@property (retain) NSObject<OS_os_activity> *relatedActivity;
@property (retain) NSSet *lastResults;
@property int annotationNotifyToken;
@property (retain) id mcNotificationToken;
@property (retain) PKDiscoveryLSWatcher *lsWatcher;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *sync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)_performWithPreviousResults:(id)a0 forceNotify:(BOOL)a1 uninstalledProxies:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAttributes:(id)a0 flags:(unsigned long long)a1 report:(id /* block */)a2;
- (void)performWithPreviousResults:(id)a0 forceNotify:(BOOL)a1;
- (void)removeWatchers;
- (void)installWatchers;

@end
