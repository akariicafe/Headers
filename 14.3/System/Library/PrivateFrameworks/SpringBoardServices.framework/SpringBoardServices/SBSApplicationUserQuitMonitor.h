@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;

@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    id<SBSApplicationUserQuitMonitorDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)a0;
- (void).cxx_destruct;
- (void)_connectionQueue_invalidate;
- (id)initWithDelegate:(id)a0;
- (void)_connectionQueue_setupAndActivate;
- (void)invalidate;

@end
